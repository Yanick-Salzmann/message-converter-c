cmake_minimum_required(VERSION 3.14)
project(swift-mt-definition)

set(CMAKE_CXX_STANDARD 17)

include_directories(${PROJECT_SOURCE_DIR}/../office-utils/include)
include_directories(${PROJECT_SOURCE_DIR}/../http-utils/include)
include_directories(${CMAKE_SOURCE_DIR}/utils/include)
include_directories(${PROJECT_SOURCE_DIR})

set(PROTO_FILE_INPUT_LIST "SwiftMtMessage;SwiftMtMessageDefinition")
set(PROTO_FILE_FOLDER "${PROJECT_SOURCE_DIR}/proto;${PROJECT_SOURCE_DIR}/proto")
set(PROTO_OUTPUT_FOLDER "${PROJECT_SOURCE_DIR}/proto")
set(GENERATED_TARGET swift-mt-proto)

include(../../../proto-helper/CMakeLists.txt)

configure_file(${PROJECT_SOURCE_DIR}/templates/SwiftMtParser.g4 SwiftMtParser.g4 COPYONLY)

add_executable(swift-mt-definition main.cpp ${GENERATED_FILES}
        definition/StandardRepository.cpp
        definition/StandardRepository.h
        definition/DefinitionParser.cpp
        definition/DefinitionParser.h
        definition/SequenceStack.cpp
        definition/SequenceStack.h
        definition/GrammarGenerator.cpp
        definition/GrammarGenerator.h
        )

add_dependencies(swift-mt-definition swift-mt-proto)

link_directories(${ICU_LIBRARY_DIRS})

target_link_libraries(swift-mt-definition office-utils http-utils utils stdc++fs)