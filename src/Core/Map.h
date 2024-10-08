#ifndef MAP_H
#define MAP_H

#include <SFML/Graphics.hpp>
#include "Tile.h"
#include <vector>
#include <string>

class Map
{
    private:
        sf::Vector3i mapSize;
        Tile tileMap[25][25][25];
    public:
        Map(sf::Vector3i mapSize);
        void render(sf::RenderWindow* r);
        void update();
        ~Map();
};

#endif