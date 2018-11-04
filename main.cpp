#include "src/SurrealEngine/Application.h"

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

    Game* game = new Game();
    game->Run();
    delete game;
    return 0;
}