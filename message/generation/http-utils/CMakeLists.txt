cmake_minimum_required(VERSION 3.14)
project(http-utils)

find_package(PkgConfig)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_USE_OPENSSL on)
set(BUILD_SHARED_LIBS off)
add_subdirectory(curl)

add_subdirectory(gumbo-query)

pkg_check_modules(gumbo REQUIRED gumbo)
MESSAGE("Found GUMBO: ${gumbo_VERSION}")

include_directories(${gumbo_INCLUDEDIR})
include_directories(${PROJECT_SOURCE_DIR}/curl/include)
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${CMAKE_SOURCE_DIR}/utils/include)
include_directories(${PROJECT_SOURCE_DIR}/gumbo-query/src)

add_library(http-utils STATIC include/http-utils/HttpClient.h src/HttpClient.cpp include/http-utils/HtmlDocument.h src/HtmlDocument.cpp)

link_directories(${gumbo_LIBRARY_DIRS})

add_definitions("-DHTTP_UTILS_SELF_BUILD")

target_link_libraries(http-utils libcurl utils ${gumbo_LIBRARIES} gumbo_query_static)