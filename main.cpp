#include "src/SurrealEngine/Application.h"
#include "src/SurrealEngine/Log.h"

class Game : public SurrealEngine::Application
{
public:
    Game()
    {

    }

    ~Game()
    {

    }
};

int main() {
    SurrealEngine::Log::Init();
    LOG_INFO("> main");

    Game* game = new Game();
    game->Run();
    delete game;
    return 0;
}