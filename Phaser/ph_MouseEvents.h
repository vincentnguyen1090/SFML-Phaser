//
// Created by vince on 3/30/2023.
//

#ifndef SFMLAPPLICATIONS_ph_MOUSEEVENTS_H
#define SFMLAPPLICATIONS_ph_MOUSEEVENTS_H
#include <SFML/Graphics.hpp>

class ph_MouseEvents
{
public:
    static bool isHovered(const sf::FloatRect &bounds, const sf::RenderWindow &window);
    static bool isClicked(const sf::FloatRect &bounds, const sf::RenderWindow &window);
};


#endif //SFMLAPPLICATIONS_ph_MOUSEEVENTS_H
