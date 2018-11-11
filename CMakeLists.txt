cmake_minimum_required(VERSION 3.9)
project(SurrealEngine)

set(CMAKE_CXX_STANDARD 17)

include_directories(src/SurrealEngine/vendor/spdlog/include)

add_executable(SurrealEngine main.cpp src/SurrealEngine/Application.cpp src/SurrealEngine/Application.h src/SurrealEngine/Core.h src/SurrealEngine/Log.cpp src/SurrealEngine/Log.h)