cmake_minimum_required(VERSION 3.18)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()
set(CMAKE_CXX_STANDARD 20)

project(main LANGUAGES CXX)

add_executable(main main.cpp)

find_package(OpenGL REQUIRED)
target_link_libraries(main PUBLIC OpenGL)
find_package(glfw3 REQUIRED)
target_link_libraries(main PUBLIC glfw)
