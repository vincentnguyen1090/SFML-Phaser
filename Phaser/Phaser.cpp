//
// Created by vince on 5/4/2023.
//

#include "Phaser.h"

Phaser::Phaser()
{
    AnimatedSprite phaser(ph_Images::getImage(PHASER), 4, 12);
    phaser.changeDirection(LEFT);
    phaser.setSpeed(5);
    phaser.setTime(62);
    ph_Application::addComponent(phaser);
    ph_Application::run();
}
