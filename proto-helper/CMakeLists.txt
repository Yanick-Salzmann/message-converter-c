cmake_minimum_required(VERSION 3.14)

find_package(protobuf REQUIRED)

MESSAGE("Protobuffer version: ${Protobuf_VERSION}")
MESSAGE("Protoc executable: ${Protobuf_PROTOC_EXECUTABLE}")

set(GENERATED_PROTOBUF_PATH ${PROTO_OUTPUT_FOLDER})

list(LENGTH PROTO_FILE_INPUT_LIST num_proto_files_raw)
math(EXPR num_proto_files "${num_proto_files_raw} - 1")

foreach(loop_var RANGE ${num_proto_files})
    list(GET PROTO_FILE_INPUT_LIST ${loop_var} PROTO_FILE_NAME)
    list(GET PROTO_FILE_FOLDER ${loop_var} PROTO_PATH)

    message("file name " ${PROTO_FILE_NAME})
    message("file path " ${PROTO_PATH})

    add_custom_command(
            OUTPUT  "${PROTO_FILE_NAME}.pb.cc"
            "${PROTO_FILE_NAME}.pb.h"
            COMMAND ${Protobuf_PROTOC_EXECUTABLE}
            ARGS "--proto_path=${PROTO_PATH}"
            "--cpp_out=${GENERATED_PROTOBUF_PATH}"
            "${PROTO_PATH}/${PROTO_FILE_NAME}.proto"
    )

    list(APPEND GENERATED_FILES
            "${GENERATED_PROTOBUF_PATH}/${PROTO_FILE_NAME}.pb.cc"
            )

    list(APPEND OUT_FILES ${PROTO_FILE_NAME}.pb.cc ${PROTO_FILE_NAME}.pb.h)


endforeach(loop_var)

include_directories(${Protobuf_INCLUDE})

add_custom_target(${GENERATED_TARGET} ALL DEPENDS ${OUT_FILES})
set_source_files_properties(${GENERATED_FILES}
        PROPERTIES GENERATED TRUE)

link_libraries(protobuf)