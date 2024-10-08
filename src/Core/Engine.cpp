#include "Engine.h"

Engine* Engine::Instance = nullptr;

bool Engine::Init()
{
    IsRunning = true;
    SFML_Window.create(sf::VideoMode(800, 600), "Isometric Game", sf::Style::Fullscreen);
    SFML_Window.setFramerateLimit(60);
    return true;
}
bool Engine::Clean()
{
    SFML_Window.close();
    return true;
}

void Engine::Update()
{
    this->m.update();
}
void Engine::Render()
{
    SFML_Window.clear(sf::Color(47, 61, 53));

    this->m.render(&SFML_Window);

    SFML_Window.display();
}
void Engine::Events()
{
    sf::Event event;
    while (SFML_Window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            IsRunning = false;
        }

        if (event.type == sf::Event::KeyPressed)
        {
            if (event.key.code == sf::Keyboard::Escape)
            {
                IsRunning = false;
            }
        }
    }
}

sf::Vector2f Engine::getScreenCords(sf::Vector3f w, float scalar)
{
    return sf::Vector2f(
        w.x*0.5*scalar  +  w.y*-0.5*scalar,
        w.x*0.25*scalar +  w.y*0.25*scalar + w.z*scalar
                        );
};