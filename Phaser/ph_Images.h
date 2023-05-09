//
// Created by vince on 4/10/2023.
//

#ifndef SFMLAPPLICATIONS_ph_IMAGES_H
#define SFMLAPPLICATIONS_ph_IMAGES_H
#include <map>
#include <SFML/Graphics.hpp>
enum ph_imagesENUM
{
    PHASER
};
class ph_Images
{
private:
    static std::map<ph_imagesENUM, sf::Texture> textures;
    static std::string getPath(ph_imagesENUM image);
    static void load(ph_imagesENUM image);
public:
    static sf::Texture& getImage(ph_imagesENUM image);
};


#endif //SFMLAPPLICATIONS_ph_IMAGES_H
