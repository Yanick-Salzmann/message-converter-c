cmake_minimum_required(VERSION 3.14)
project(application)

set(CMAKE_CXX_STANDARD 17)

set(PROTO_PATH ${PROJECT_SOURCE_DIR})
set(PROTO_PATH ${PROTO_PATH}/interfaces)
set(GENERATED_PROTOBUF_PATH ${PROJECT_SOURCE_DIR}/generated)

set(GENERATED_PROTOBUF_PATH "${PROJECT_SOURCE_DIR}/generated")

set(_PROTOBUF_LIBPROTOBUF protobuf::libprotobuf)
set(_PROTOBUF_PROTOC $<TARGET_FILE:protobuf::protoc>)

# Find gRPC installation
# Looks for gRPCConfig.cmake file installed by gRPC's cmake installation.
find_package(gRPC CONFIG REQUIRED)
message(STATUS "Using gRPC ${gRPC_VERSION}")

set(_GRPC_GRPCPP_UNSECURE gRPC::grpc++_unsecure)
set(_GRPC_CPP_PLUGIN_EXECUTABLE $<TARGET_FILE:gRPC::grpc_cpp_plugin>)

set(PROTO_LIST "MessageConverter")
set(PROTO_FILE_LIST ${PROTO_PATH} )
foreach(loop_var RANGE 0)
    list(GET PROTO_LIST ${loop_var} PROTO_FILE_NAME)
    list(GET PROTO_FILE_LIST ${loop_var} PROTO_PATH)

    message("file name " ${PROTO_FILE_NAME})
    message("file path " ${PROTO_PATH})

    add_custom_command(
            OUTPUT  "${PROTO_FILE_NAME}.pb.cc"
            "${PROTO_FILE_NAME}.pb.h"
            COMMAND ${_PROTOBUF_PROTOC}
            ARGS "--proto_path=${PROTO_PATH}"
            "--cpp_out=${GENERATED_PROTOBUF_PATH}"
            "${PROTO_PATH}/${PROTO_FILE_NAME}.proto"
    )

    list(APPEND GENERATED_FILES
            "${GENERATED_PROTOBUF_PATH}/${PROTO_FILE_NAME}.pb.cc"
            )

    list(APPEND OUT_FILES ${PROTO_FILE_NAME}.pb.cc ${PROTO_FILE_NAME}.pb.h)


endforeach(loop_var)

foreach(loop_var  RANGE 0)
    list(GET PROTO_LIST ${loop_var} PROTO_FILE_NAME)
    list(GET PROTO_FILE_LIST ${loop_var} PROTO_PATH)

    message("file name " ${PROTO_FILE_NAME})
    message("file path " ${PROTO_PATH})

    add_custom_command(
            OUTPUT   "${PROTO_FILE_NAME}.grpc.pb.h"
            "${PROTO_FILE_NAME}.grpc.pb.cc"
            COMMAND ${_PROTOBUF_PROTOC}
            ARGS "--proto_path=${PROTO_PATH}"
            "--grpc_out=${GENERATED_PROTOBUF_PATH}"
            "--plugin=protoc-gen-grpc=${_GRPC_CPP_PLUGIN_EXECUTABLE}"
            "${PROTO_PATH}/${PROTO_FILE_NAME}.proto"
    )

    list(APPEND GENERATED_FILES
            "${GENERATED_PROTOBUF_PATH}/${PROTO_FILE_NAME}.grpc.pb.cc"
            )

    list(APPEND OUT_FILES ${PROTO_FILE_NAME}.grpc.pb.cc ${PROTO_FILE_NAME}.grpc.pb.h)

endforeach(loop_var)

add_custom_target(application_header ALL  DEPENDS ${OUT_FILES})

include_directories(${GENERATED_PROTOBUF_PATH})
include_directories(${Protobuf_INCLUDE})

link_libraries(grpc++_unsecure grpc protobuf pthread )

set_source_files_properties(${GENERATED_FILES}
        PROPERTIES GENERATED TRUE)

add_executable(application  main.cpp  ${GENERATED_FILES})
add_dependencies(application application_header )