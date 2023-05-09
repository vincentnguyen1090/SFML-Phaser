//
// Created by vince on 3/29/2023.
//

#ifndef SFMLAPPLICATIONS_ph_APPLICATION_H
#define SFMLAPPLICATIONS_ph_APPLICATION_H
#include <SFML/Graphics.hpp>
#include "ph_Component.h"
#include <vector>
class ph_Application
{
private:
     static sf::RenderWindow window;
     static std::vector<ph_Component*> components;
public:
    static void run();
    static void addComponent(ph_Component &component);
    static void test();
};


#endif //SFMLAPPLICATIONS_ph_APPLICATION_H
