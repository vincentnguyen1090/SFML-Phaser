//
// Created by vince on 4/10/2023.
//

#include "ph_Images.h"
#include <iostream>
//this creates out static in our cpp since static is not actually created yet
//this only needs to be created only one time
//objects only need to use this one map
std::map<ph_imagesENUM, sf::Texture> ph_Images::textures;

std::string ph_Images::getPath(ph_imagesENUM image)
{
    switch(image)
    {
        case PHASER: return "Images/phaserSFML.png";
    }
}

void ph_Images::load(ph_imagesENUM image)
{
    //get the texture that is matched to the image enum
    //mapping image to a file path
    if(!textures[image].loadFromFile(getPath(image)))
    {
        std::cout << "not loading\n";
    }
}

sf::Texture &ph_Images::getImage(ph_imagesENUM image)
{
    load(image);
    return textures[image];
}
