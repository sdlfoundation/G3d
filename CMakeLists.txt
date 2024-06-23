cmake_minimum_required(VERSION 3.29.6)

project(G3d VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_compile_definitions(NW_RELEASE=true)

add_library(G3d STATIC ${SOURCES})

set_target_properties(G3d PROPERTIES
    VERSION ${PROJECT_VERSION}
    OUTPUT_NAME "G3d"
)

if (NOT TARGET sdl-utils)
    add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/lib/sdl-utils)
endif()

target_include_directories(G3d PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/lib/sdl-utils/Include)
target_link_libraries(G3d sdl-utils)

target_include_directories(G3d PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(G3d PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

add_subdirectory(src)
