cmake_minimum_required(VERSION 3.16)
project(furdevs-chess-challenge
        VERSION 0.0.1
        DESCRIPTION "A simple chess program for the challenge on the furdevs discord server."
        HOMEPAGE_URL "https://github.com/MCWertGaming/Furdevs-challenge-chess-checkers"
        LANGUAGES CXX)

# Set C++ version
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)

# load custom CMake functions
include(cmake/dependency.cmake)

# Add sub-projects
add_subdirectory(chess)
add_subdirectory(checkers)
add_subdirectory(dependencies)
add_subdirectory(tests)
add_subdirectory(console)
