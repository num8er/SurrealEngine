#include "src/SurrealEngine/Application.h"
#include "src/SurrealEngine/Log.h"

SurrealEngine::Application* SurrealEngine::CreateApplication() {
    return new Application();
}

int main() {
    SurrealEngine::Log::Init();
    LOG_INFO("> main");

    auto app = SurrealEngine::CreateApplication();
    app->Run();

    delete app;

    return 0;
}