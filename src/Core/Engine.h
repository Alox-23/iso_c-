#ifndef ENGINE_H
#define ENGINE_H

#include <SFML/Graphics.hpp>
#include "Tile.h"
#include <string>
#include <iostream>

class Engine
{
    public:
        
        static inline Engine* GetInstance()
        {
            return Instance = (Instance != nullptr)? Instance : new Engine();
        }
        bool Init();
        bool Clean();

        void Update();
        void Render();
        void Events();

        inline bool GetIsRunning(){return IsRunning;}

    private: 
        Engine(){};

        bool IsRunning;
        Tile t = Tile("assets/isometric-tiles/green-indiv/green-cube.png", sf::Vector2i(5,5));
        sf::RenderWindow SFML_Window;
        static Engine* Instance;
        sf::Clock clock;
};
#endif