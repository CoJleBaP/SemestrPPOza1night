
#include "GameEngine.h"
#include <Windows.h>
using namespace sf;

void HideConsole()
{
    ::ShowWindow(::GetConsoleWindow(), SW_HIDE);
}
int main()
{
    HideConsole();
    auto myGame = std::make_unique<GameEngine>();
        
    myGame->run();

    return 0;
}



