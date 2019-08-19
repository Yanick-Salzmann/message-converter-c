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

set(COMPONENT_GRAMMAR_GENERATED_FILES
        "${PROJECT_SOURCE_DIR}/format/SwiftMtComponentFormatParser.cpp"
        "${PROJECT_SOURCE_DIR}/format/SwiftMtComponentFormatParser.h"
        "${PROJECT_SOURCE_DIR}/format/SwiftMtComponentFormatLexer.cpp"
        "${PROJECT_SOURCE_DIR}/format/SwiftMtComponentFormatLexer.h"
        "${PROJECT_SOURCE_DIR}/format/SwiftMtComponentFormatBaseListener.cpp"
        "${PROJECT_SOURCE_DIR}/format/SwiftMtComponentFormatBaseListener.h"
        "${PROJECT_SOURCE_DIR}/format/SwiftMtComponentFormatListener.cpp"
        "${PROJECT_SOURCE_DIR}/format/SwiftMtComponentFormatListener.h"
        )

add_custom_command(
        OUTPUT
        ${COMPONENT_GRAMMAR_GENERATED_FILES}
        DEPENDS
        ${PROJECT_SOURCE_DIR}/format/SwiftMtComponentFormat.g4
        COMMAND ${Java_JAVA_EXECUTABLE}
        ARGS "-cp" "${CMAKE_SOURCE_DIR}/third_party/antlr/antlr-4.7.2-complete.jar"
        "org.antlr.v4.Tool"
        -Dlanguage=Cpp
        -package message::definition::swift::mt
        -o ${PROJECT_SOURCE_DIR}/format
        ${PROJECT_SOURCE_DIR}/format/SwiftMtComponentFormat.g4
)

add_custom_target(swift-mt-component-parser ALL DEPENDS
        ${COMPONENT_GRAMMAR_GENERATED_FILES}
        )

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../swift-mt-generation/antlr4/runtime/Cpp/runtime/src)

set_source_files_properties(
        ${COMPONENT_GRAMMAR_GENERATED_FILES}
        PROPERTIES GENERATED TRUE
)

add_definitions("-DANTLR4CPP_STATIC -DNOGDI")

add_executable(swift-mt-definition main.cpp
        ${GENERATED_FILES}
        ${COMPONENT_GRAMMAR_GENERATED_FILES}
        definition/StandardRepository.cpp
        definition/StandardRepository.h
        definition/DefinitionParser.cpp
        definition/DefinitionParser.h
        definition/SequenceStack.cpp
        definition/SequenceStack.h
        definition/GrammarGenerator.cpp
        definition/GrammarGenerator.h
        definition/ComponentFormatParser.cpp
        definition/ComponentFormatParser.h
        )

add_dependencies(swift-mt-definition swift-mt-component-parser)

add_dependencies(swift-mt-definition swift-mt-proto)

link_directories(${ICU_LIBRARY_DIRS})

target_link_libraries(swift-mt-definition office-utils http-utils utils stdc++fs antlr4_static)