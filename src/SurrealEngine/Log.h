#include <memory>

#include "Core.h"
#include "vendor/spdlog/include/spdlog/tweakme.h"
#include "vendor/spdlog/include/spdlog/common.h"
#include "vendor/spdlog/include/spdlog/spdlog.h"
#include "vendor/spdlog/include/spdlog/logger.h"
#include "vendor/spdlog/include/spdlog/sinks/stdout_color_sinks.h"


namespace SurrealEngine {

    class SURREALENGINE_API Log {
    public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger> &GetCoreLogger() { return s_CoreLogger; }

        inline static std::shared_ptr<spdlog::logger> &GetClientLogger() { return s_ClientLogger; }

    private:
        inline static std::shared_ptr<spdlog::logger> s_CoreLogger;
        inline static std::shared_ptr<spdlog::logger> s_ClientLogger;
    };
}

#define CORE_TRACE(...) ::SurrealEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CORE_INFO(...) ::SurrealEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CORE_WARNING(...) ::SurrealEngine::Log::GetCoreLogger()->warning(__VA_ARGS__)
#define CORE_ERROR(...) ::SurrealEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CORE_FATAL(...) ::SurrealEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

#define LOG_TRACE(...) ::SurrealEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define LOG_INFO(...) ::SurrealEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define LOG_WARNING(...) ::SurrealEngine::Log::GetClientLogger()->warning(__VA_ARGS__)
#define LOG_ERROR(...) ::SurrealEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define LOG_FATAL(...) ::SurrealEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)
