//
// Created by vince on 4/6/2023.
//

#ifndef SFMLAPPLICATIONS_ANIMATEDSPRITE_H
#define SFMLAPPLICATIONS_ANIMATEDSPRITE_H
#include <SFML/Graphics.hpp>
#include "ph_Component.h"
#include <cmath>
enum directions {FORWARD, LEFT, RIGHT, BACK};

class AnimatedSprite : public ph_Component, public sf::Sprite
{
private:
    sf::Clock clock;
    sf::IntRect intRect;
    int time = 250;
    float speed;
    sf::Keyboard::Key forwardKey = sf::Keyboard::Up,
    leftKey = sf::Keyboard::Left,
    rightKey = sf::Keyboard::Right,
    downKey = sf::Keyboard::Down ;
public:
    void setForwardKey(sf::Keyboard::Key forwardKey);

    void setLeftKey(sf::Keyboard::Key leftKey);

    void setRightKey(sf::Keyboard::Key rightKey);

    void setDownKey(sf::Keyboard::Key downKey);

public:


private:
    unsigned width, height;
    void setup(sf::Texture &texture, int rows, int cols);
    void setupIntRect(sf::Vector2u imgSize, int rows, int cols);

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

public:
    //character moves
    void eventHandler(sf::RenderWindow &window, sf::Event event) override;

public:
    AnimatedSprite();
    AnimatedSprite(sf::Texture &texture, int rows, int cols);

    int getTime() const;
    void setTime(int time);

    void animate();
    void update();
    //changed the row
    void changeDirection(directions direction);

    //set speed in main
    float getSpeed() const;
    void setSpeed(float speed);
};



#endif //SFMLAPPLICATIONS_ANIMATEDSPRITE_H
