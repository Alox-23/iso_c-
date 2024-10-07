#include <SFML/Graphics.hpp>
#include <math.h>
#include <ctime>
#include <iostream>
#include <chrono>

using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(1200, 700), "SFML works!");
    
    sf::Texture texture;
    texture.loadFromFile("assets/isometric-tiles/green-indiv/green-cube64.png");

    int grid_x = 35;
    int grid_y = 35;
    
    sf::Sprite cubes[grid_x][grid_y];

    for (int i = 0; i < grid_y; i++)
    {
        for (int j = 0; j < grid_x; j++)
        {
            sf::Sprite cube;
            cube.setTexture(texture);
            // Get the current time from the system clock
            auto now = chrono::system_clock::now();

            // Convert the current time to time since epoch
            auto duration = now.time_since_epoch();
            cube.setPosition((j*0.5*64)+(i*-0.5*64)-16+600, (j*0.25*64)+(i*0.25*64)+100);
            cubes[i][j] = cube;
        }
    };

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }


        window.clear();

        for (int i = 0; i < grid_y; i++)
        {
            for (int j = 0; j < grid_x; j++)
            {
                
                window.draw(cubes[i][j]);
            }
        };
        window.display();
    }

    return 0;
}