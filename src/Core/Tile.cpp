#include "Tile.h"

Tile::Tile(std::string texturePath, sf::Vector2i worldPosition)
{
    this->worldPosition = worldPosition;
    if (!this->textureEntity.loadFromFile(texturePath))
    {
        std::cout << "ERROR: error loading Tile texture (check texturePath parameter in Tile constructor) Tile adress - " << this << std::endl;
    }
    this->drawEntity.setTexture(this->textureEntity);

    drawEntitiySize.x = this->textureEntity.getSize().x;
    drawEntitiySize.y = this->textureEntity.getSize().y;

    this->drawEntity.setPosition(sf::Vector2f(0-(this->drawEntitiySize.x/2),0));
}

void Tile::setDrawEntityPosition(sf::Vector2f v)
{
    this->drawEntity.setPosition(v-sf::Vector2f());
}

sf::Sprite* Tile::getDrawEntityPtr()
{
    return &this->drawEntity;
}

Tile::~Tile()
{
    
};