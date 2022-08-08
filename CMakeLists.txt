cmake_minimum_required(VERSION 3.16)
project(example VERSION 0.1.0 LANGUAGES CXX)

# Conan
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

# Qt
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# C++ Standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Vim
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# FindThreads.cmake fix
set(CMAKE_THREAD_LIBS_INIT "-lpthread")

include_directories(include)

if (DEBUG)
    add_compile_options(-g3 -ggdb)
    add_compile_definitions(DEBUG)
endif()

if (DOCS)
    add_subdirectory(docs)
endif()

add_subdirectory(src)

