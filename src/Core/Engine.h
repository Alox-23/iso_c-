#ifndef ENGINE_H
#define ENGINE_H

#include <SFML/Graphics.hpp>

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
        sf::RenderWindow SFML_Window;
        static Engine* Instance;
        sf::Clock clock;
};
#endif