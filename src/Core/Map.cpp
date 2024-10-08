#include "Map.h"

Map::Map(sf::Vector3i mapSize)
{
    this->mapSize.x = mapSize.x;
    this->mapSize.y = mapSize.y;
    this->mapSize.z = mapSize.z;

    std::cout << mapSize.x << std::endl;
    std::cout << mapSize.y << std::endl;
    std::cout << mapSize.z << std::endl;

    for (int i = 0; i < this->mapSize.z; i++)
    {
        for (int j = 0; i < this->mapSize.y; i++)
        {
            for (int k = 0; i < this->mapSize.x; i++)
            {
                this->tileMap[i][j][k] = Tile("assets/isometric-tiles/green-indiv/green-cube.png", sf::Vector3f(i, j, k));
            }
        }
    }
}

void Map::render(sf::RenderWindow* r)
{
    for (int i = 0; i < this->mapSize.z; i++)
    {
        for (int j = 0; i < this->mapSize.y; i++)
        {
            for (int k = 0; i < this->mapSize.x; i++)
            {
                r->draw(tileMap[i][j][k].getDrawEntity());
            }
        }
    }
}

void Map::update()
{
    for (int i = 0; i < this->mapSize.z; i++)
    {
        for (int j = 0; i < this->mapSize.y; i++)
        {
            for (int k = 0; i < this->mapSize.x; i++)
            {
                tileMap[i][j][k].update();
            }
        }
    }
}

Map::~Map()
{

};