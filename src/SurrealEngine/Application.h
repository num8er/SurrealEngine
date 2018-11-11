#pragma once

#include "Core.h"


namespace SurrealEngine {

    class SURREALENGINE_API Application {
    public:
        Application();

        virtual ~Application();

        void Run();
    };
}