cmake_minimum_required(VERSION 3.14)
project(swift-mt)

set(CMAKE_CXX_STANDARD 17)

include_directories(${PROJECT_SOURCE_DIR}/../office-utils/include)
include_directories(${PROJECT_SOURCE_DIR}/../http-utils/include)

set(PROTO_FILE_INPUT_LIST "SwiftMtMessage;SwiftMtMessageDefinition")
set(PROTO_FILE_FOLDER "${PROJECT_SOURCE_DIR}/proto;${PROJECT_SOURCE_DIR}/proto")
set(PROTO_OUTPUT_FOLDER "${PROJECT_SOURCE_DIR}/proto")
set(GENERATED_TARGET swift-mt-proto)

include(../../../proto-helper/CMakeLists.txt)

add_executable(swift-mt-generation main.cpp ${GENERATED_FILES})
add_dependencies(swift-mt-generation swift-mt-proto)

target_link_libraries(swift-mt-generation office-utils http-utils)