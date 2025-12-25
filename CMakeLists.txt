cmake_minimum_required(VERSION 3.29)

# Include guards
if(PROJECT_SOURCE_DIR STREQUAL PROJECT_BINARY_DIR)
    message(
            FATAL_ERROR
            "In-source builds not allowed. Please make a new directory (called a build directory) and run CMake from there."
    )
endif()

project(AdventOfCode)

set(CMAKE_CXX_STANDARD 14)

# Subdirectories
add_subdirectory(2025/DayOne2025)