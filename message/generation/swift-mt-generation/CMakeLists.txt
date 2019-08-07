cmake_minimum_required(VERSION 3.14)
project(swift-mt-generation)

add_subdirectory(antlr4/runtime/Cpp)

include_directories(antlr4/runtime/Cpp/runtime/src)

find_package(java REQUIRED COMPONENTS Development)

execute_process(
        COMMAND ${Java_JAVAC_EXECUTABLE} -cp "jsoup-1.12.1.jar;." ${PROJECT_SOURCE_DIR}/helpers/java/MessageListHelper.java
        WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/helpers/java
)

execute_process(
        COMMAND ${Java_JAVA_EXECUTABLE} -cp "jsoup-1.12.1.jar;." MessageListHelper https://www2.swift.com/knowledgecentre/rest/v1/publications/usgf_20180720/3.0/idx_msg.htm
        WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/helpers/java
        OUTPUT_STRIP_TRAILING_WHITESPACE
        OUTPUT_VARIABLE MESSAGE_TYPES_RAW
)

string(REGEX MATCHALL "[n0-9][0-9][0-9]\r?\n" MESSAGE_TYPE_LIST ${MESSAGE_TYPES_RAW})

list(LENGTH MESSAGE_TYPE_LIST NUM_MESSAGE_TYPES)
math(EXPR NUM_MESSAGE_TYPES "${NUM_MESSAGE_TYPES} - 1")

foreach (loop_var RANGE ${NUM_MESSAGE_TYPES})
    list(GET MESSAGE_TYPE_LIST ${loop_var} MESSAGE_TYPE)
    string(REGEX REPLACE "\r?\n$" "" MESSAGE_TYPE "${MESSAGE_TYPE}")
    add_custom_command(
            OUTPUT "SwiftMtParser_MT${MESSAGE_TYPE}.g4"
            COMMAND swift-mt-definition
            ARGS ${MESSAGE_TYPE} SR2018 https://www2.swift.com/knowledgecentre/rest/v1/publications/usgf_20180720/3.0/ ${PROJECT_SOURCE_DIR}/repository $<TARGET_FILE_DIR:swift-mt-definition>
    )

    add_custom_command(
            OUTPUT
            "SwiftMtParser_MT${MESSAGE_TYPE}Parser.cpp"
            "SwiftMtParser_MT${MESSAGE_TYPE}Parser.h"
            "SwiftMtParser_MT${MESSAGE_TYPE}Lexer.cpp"
            "SwiftMtParser_MT${MESSAGE_TYPE}Lexer.h"
            "SwiftMtParser_MT${MESSAGE_TYPE}BaseListener.cpp"
            "SwiftMtParser_MT${MESSAGE_TYPE}BaseListener.h"
            "SwiftMtParser_MT${MESSAGE_TYPE}Listener.cpp"
            "SwiftMtParser_MT${MESSAGE_TYPE}Listener.h"
            COMMAND ${Java_JAVA_EXECUTABLE}
            ARGS "-cp" "${PROJECT_SOURCE_DIR}/helpers/java/antlr-4.7.2-complete.jar"
            "org.antlr.v4.Tool"
            -Dlanguage=Cpp
            -package message::definition::swift::mt::parsers::sr2018
            -o ${PROJECT_SOURCE_DIR}/repository/SR2018/parsers
            ${PROJECT_SOURCE_DIR}/repository/SR2018/grammars/SwiftMtParser_MT${MESSAGE_TYPE}.g4

    )

    list(APPEND GRAMMAR_FILES
            SwiftMtParser_MT${MESSAGE_TYPE}.g4)
    list(APPEND PARSER_FILES
            SwiftMtParser_MT${MESSAGE_TYPE}Parser.cpp
            SwiftMtParser_MT${MESSAGE_TYPE}Parser.h
            SwiftMtParser_MT${MESSAGE_TYPE}Lexer.cpp
            SwiftMtParser_MT${MESSAGE_TYPE}Lexer.h
            SwiftMtParser_MT${MESSAGE_TYPE}BaseListener.cpp
            SwiftMtParser_MT${MESSAGE_TYPE}BaseListener.h
            SwiftMtParser_MT${MESSAGE_TYPE}Listener.cpp
            SwiftMtParser_MT${MESSAGE_TYPE}Listener.h)

    list(APPEND GENERATED_PARSER_FILES
            ${PROJECT_SOURCE_DIR}/repository/SR2018/parsers/SwiftMtParser_MT${MESSAGE_TYPE}Parser.cpp
            ${PROJECT_SOURCE_DIR}/repository/SR2018/parsers/SwiftMtParser_MT${MESSAGE_TYPE}Parser.h
            ${PROJECT_SOURCE_DIR}/repository/SR2018/parsers/SwiftMtParser_MT${MESSAGE_TYPE}Lexer.cpp
            ${PROJECT_SOURCE_DIR}/repository/SR2018/parsers/SwiftMtParser_MT${MESSAGE_TYPE}Lexer.h
            ${PROJECT_SOURCE_DIR}/repository/SR2018/parsers/SwiftMtParser_MT${MESSAGE_TYPE}BaseListener.cpp
            ${PROJECT_SOURCE_DIR}/repository/SR2018/parsers/SwiftMtParser_MT${MESSAGE_TYPE}BaseListener.h
            ${PROJECT_SOURCE_DIR}/repository/SR2018/parsers/SwiftMtParser_MT${MESSAGE_TYPE}Listener.cpp
            ${PROJECT_SOURCE_DIR}/repository/SR2018/parsers/SwiftMtParser_MT${MESSAGE_TYPE}Listener.h)
endforeach ()

set_source_files_properties(${GENERATED_PARSER_FILES}
        PROPERTIES GENERATED TRUE)

add_custom_target(swift-mt-generation-grammars ALL DEPENDS ${GRAMMAR_FILES})
add_custom_target(swift-mt-generation-parsers ALL DEPENDS ${PARSER_FILES})
add_dependencies(swift-mt-generation-parsers swift-mt-generation-grammars)
add_dependencies(swift-mt-generation-parsers swift-mt-definition)
add_library(swift-mt-generation STATIC ${GENERATED_PARSER_FILES})
target_link_libraries(swift-mt-generation antlr4_shared)

option(MESSAGE_SWIFT_MT_GENERATE_PARSERS "Generate parsers for SWIFT MT (this takes a lot of time)" ON)

#if(${MESSAGE_SWIFT_MT_GENERATE_PARSERS})
    add_dependencies(swift-mt-generation swift-mt-generation-parsers)
#endif()
