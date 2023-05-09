//
// Created by vince on 3/29/2023.
//

#include "ph_Application.h"
#include <iostream>
sf::RenderWindow ph_Application::window;
std::vector<ph_Component*> ph_Application::components;

void ph_Application::run()
{
    window.create({1024,720,32},"Tutorial");
    window.setFramerateLimit(60);

    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)) {
            if (event.type == sf::Event::Closed){
                window.close();
            }
            for(ph_Component* c : components)
                c->eventHandler(window, event);
        }
        for(ph_Component* item : components)
            item->update();
        window.clear();
        for(ph_Component* item : components)
            window.draw(*reinterpret_cast<sf::Drawable*>(item));
        window.display();
    }
}

void ph_Application::addComponent(ph_Component &component)
{
    components.push_back(&component);
}

