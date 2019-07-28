cmake_minimum_required(VERSION 3.14)
project(utils)

set(CMAKE_CXX_STANDARD 17)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_subdirectory(json)
set(INJA_USE_EMBEDDED_JSON off)
add_subdirectory(inja)

add_library(utils STATIC include/utils/String.h src/String.cpp)
target_link_libraries(utils inja)