#include "Tile.h"

Tile::Tile(std::string texturePath, sf::Vector2i worldPosition)
{
    this->worldPosition = worldPosition;
    if (!this->textureEntity.loadFromFile(texturePath))
    {
        std::cout << "ERROR: error loading Tile texture (check texturePath parameter in Tile constructor) Tile adress - " << this << std::endl;
    }
    this->drawEntity.setTexture(this->textureEntity);
}

sf::Sprite Tile::getDrawEntityPtr()
{
    return this->drawEntity;
}

Tile::~Tile()
{
    
};