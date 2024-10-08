#include "Tile.h"

Tile::Tile(std::string texturePath, sf::Vector3f worldPosition)
{
    this->worldPosition = worldPosition;
    if (!this->textureEntity.loadFromFile(texturePath))
    {
        std::cout << "ERROR: error loading Tile texture (check texturePath parameter in Tile constructor) Tile adress - " << this << std::endl;
    }
    this->drawEntity.setTexture(this->textureEntity);

    drawEntitiySize.x = this->textureEntity.getSize().x;
    drawEntitiySize.y = this->textureEntity.getSize().y;

    this->updateScreenCords();
}

void Tile::render(sf::RenderWindow* r)
{
    r->draw(this->drawEntity);
}

void Tile::update()
{
    this->updateScreenCords();
}

sf::Sprite Tile::getDrawEntity()
{
    return this->drawEntity;
}

void Tile::updateScreenCords()
{
    this->drawEntity.setPosition
    (
        this->worldPosition.x*0.5*this->drawEntitiySize.x  +  this->worldPosition.y*-0.5*this->drawEntitiySize.y - (this->drawEntitiySize.x/2),
        this->worldPosition.x*0.25*this->drawEntitiySize.x +  this->worldPosition.y*0.25*this->drawEntitiySize.y - this->worldPosition.z*this->drawEntitiySize.y
    );
}

Tile::~Tile()
{


};