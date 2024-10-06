#include "Core/Engine.h"
#include <iostream>

int main()
{
    Engine::GetInstance()->Init();

    while (Engine::GetInstance()->GetIsRunning())
    {
        Engine::GetInstance()->Events();
        Engine::GetInstance()->Update();
        Engine::GetInstance()->Render();
    }

    Engine::GetInstance()->Clean();

    return 0;
}