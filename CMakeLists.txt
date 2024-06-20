cmake_minimum_required(VERSION 3.2)

project(G3d VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(G3d STATIC ${SOURCES})

set_target_properties(G3d PROPERTIES
    VERSION ${PROJECT_VERSION}
    OUTPUT_NAME "G3d"
)

target_include_directories(G3d PUBLIC include)
target_include_directories(G3d PUBLIC src)

add_subdirectory(src)
