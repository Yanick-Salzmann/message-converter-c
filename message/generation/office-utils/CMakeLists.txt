cmake_minimum_required(VERSION 3.14)
project(office-utils)

set(CMAKE_CXX_STANDARD 17)

set(STATIC on)
add_subdirectory(xlnt)

include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(xlnt/include)

add_library(office-utils STATIC include/excel/WorkBook.h excel/WorkBook.cpp include/excel/Sheet.h excel/Sheet.cpp)

add_definitions("-DSELF_BUILD_OFFICE_UTILS")

target_link_libraries(office-utils xlnt)