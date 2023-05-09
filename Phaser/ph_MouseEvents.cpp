//
// Created by vince on 3/30/2023.
//

#include "ph_MouseEvents.h"

bool ph_MouseEvents::isHovered(const sf::FloatRect &bounds, const sf::RenderWindow &window)
{
    sf::Vector2f mpos = (sf::Vector2f) sf::Mouse::getPosition(window);
    return bounds.contains(mpos);
}

bool ph_MouseEvents::isClicked(const sf::FloatRect &bounds, const sf::RenderWindow &window)
{
    return sf::Mouse::isButtonPressed(sf::Mouse::Left) && isHovered(bounds, window);
}
