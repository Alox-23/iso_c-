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
        sf::Vector3f worldPosition;
        sf::Vector2f drawEntitiySize;
        void updateScreenCords();
    public:
        Tile() {};
        Tile(std::string texturePath, sf::Vector3f worldPosition);
        void render(sf::RenderWindow* r);
        sf::Sprite getDrawEntity();
        void update();
        ~Tile();
};

#endif