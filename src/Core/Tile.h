#ifndef TILE_H
#define TILE_H

#include <SFML/Graphics.hpp>
#include <string.h>
#include <iostream>

class Tile
{
    private:
        sf::Sprite drawEntity;
        sf::Texture textureEntity;
        sf::Vector2i worldPosition;
        sf::Vector2f drawEntitiySize;
    public:
        Tile(std::string texturePath, sf::Vector2i worldPosition);
        sf::Sprite* getDrawEntityPtr();
        void setDrawEntityPosition(sf::Vector2f v);
        ~Tile();
};

#endif