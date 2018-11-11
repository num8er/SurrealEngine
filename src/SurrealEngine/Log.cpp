#include "Log.h"

namespace SurrealEngine {

    void Log::Init() {
        spdlog::set_pattern("[%H:%M:%S %z] [%n] %v");

        s_CoreLogger = spdlog::stdout_color_mt("SURREALENGINE");
        s_CoreLogger->set_level(spdlog::level::trace);

        s_ClientLogger = spdlog::stdout_color_mt("APP");
        s_ClientLogger->set_level(spdlog::level::trace);
    }
}