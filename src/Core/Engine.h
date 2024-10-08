#ifndef ENGINE_H
#define ENGINE_H

#include <SFML/Graphics.hpp>
#include "Tile.h"
#include "Map.h"
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
        sf::Vector2f getScreenCords(sf::Vector3f w, float scalar);
        Engine(){};

        bool IsRunning;
        Map m = Map(sf::Vector3i(5, 5, 1));
        sf::RenderWindow SFML_Window;
        static Engine* Instance;
        sf::Clock clock;
};
#endif