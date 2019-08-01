cmake_minimum_required(VERSION 3.14)
project(utils)

set(CMAKE_CXX_STANDARD 17)

find_package(PkgConfig)

pkg_check_modules(ICU REQUIRED icu-uc)

include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${ICU_INCLUDE_DIRS})

add_subdirectory(json)
set(INJA_USE_EMBEDDED_JSON OFF)
add_subdirectory(inja)

add_subdirectory(spdlog)

add_definitions("-DUTILS_SELF_BUILD")

add_library(utils STATIC include/utils/String.h src/String.cpp include/utils/Log.h src/Log.cpp)
target_link_libraries(utils inja spdlog ${ICU_LIBRARIES})