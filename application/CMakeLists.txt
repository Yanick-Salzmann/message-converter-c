cmake_minimum_required(VERSION 3.14)
project(application)

set(CMAKE_CXX_STANDARD 17)

include(ExternalProject)

ExternalProject_Add(c-ares
        PREFIX c-ares
        SOURCE_DIR "${CMAKE_SOURCE_DIR}/third_party/grpc/third_party/cares/cares"
        CMAKE_CACHE_ARGS
        -DCARES_SHARED:BOOL=OFF
        -DCARES_STATIC:BOOL=ON
        -DCARES_STATIC_PIC:BOOL=ON
        -DCMAKE_INSTALL_PREFIX:PATH=${CMAKE_CURRENT_BINARY_DIR}/c-ares
        )

ExternalProject_Add(protobuf
        PREFIX protobuf
        SOURCE_DIR "${CMAKE_SOURCE_DIR}/third_party/grpc/third_party/protobuf/cmake"
        CMAKE_CACHE_ARGS
        -Dprotobuf_BUILD_TESTS:BOOL=OFF
        -Dprotobuf_WITH_ZLIB:BOOL=OFF
        -Dprotobuf_MSVC_STATIC_RUNTIME:BOOL=OFF
        -Dprotobuf_BUILD_PROTOC_BINARIES:BOOL=ON
        -DCMAKE_INSTALL_PREFIX:PATH=${CMAKE_CURRENT_BINARY_DIR}/protobuf
        )

ExternalProject_Add(zlib
        PREFIX zlib
        SOURCE_DIR "${CMAKE_SOURCE_DIR}/third_party/grpc/third_party/zlib"
        CMAKE_CACHE_ARGS
        -DCMAKE_INSTALL_PREFIX:PATH=${CMAKE_CURRENT_BINARY_DIR}/zlib
        )

if (WIN32)
    set(_FINDPACKAGE_PROTOBUF_CONFIG_DIR "${CMAKE_CURRENT_BINARY_DIR}/protobuf/cmake")
else ()
    set(_FINDPACKAGE_PROTOBUF_CONFIG_DIR "${CMAKE_CURRENT_BINARY_DIR}/protobuf/lib/cmake/protobuf")
endif ()

set(_CMAKE_ARGS_OPENSSL_ROOT_DIR "")
if (OPENSSL_ROOT_DIR)
    set(_CMAKE_ARGS_OPENSSL_ROOT_DIR "-DOPENSSL_ROOT_DIR:PATH=${OPENSSL_ROOT_DIR}")
endif ()

ExternalProject_Add(grpc
        PREFIX grpc
        SOURCE_DIR "${CMAKE_SOURCE_DIR}/third_party/grpc"
        CMAKE_CACHE_ARGS
        -DgRPC_INSTALL:BOOL=ON
        -DgRPC_BUILD_TESTS:BOOL=OFF
        -DgRPC_PROTOBUF_PROVIDER:STRING=package
        -DgRPC_PROTOBUF_PACKAGE_TYPE:STRING=CONFIG
        -DProtobuf_DIR:PATH=${_FINDPACKAGE_PROTOBUF_CONFIG_DIR}
        -DgRPC_ZLIB_PROVIDER:STRING=package
        -DZLIB_ROOT:STRING=${CMAKE_CURRENT_BINARY_DIR}/zlib
        -DgRPC_CARES_PROVIDER:STRING=package
        -Dc-ares_DIR:PATH=${CMAKE_CURRENT_BINARY_DIR}/c-ares/lib/cmake/c-ares
        -DgRPC_SSL_PROVIDER:STRING=package
        ${_CMAKE_ARGS_OPENSSL_ROOT_DIR}
        -DCMAKE_INSTALL_PREFIX:PATH=${CMAKE_CURRENT_BINARY_DIR}/grpc
        DEPENDS c-ares protobuf zlib
        CMAKE_ARGS
        -DgRPC_BUILD_CSHARP_EXT:BOOL=OFF
        -DgRPC_BUILD_TESTS:BOOL=OFF
        "-DCMAKE_CXX_FLAGS:STRING=-D_WIN32_WINNT=0x600"
        "-DCMAKE_C_FLAGS:STRING=-D_WIN32_WINNT=0x600"
        )

set(gRPC_DIR ${CMAKE_CURRENT_BINARY_DIR}/grpc/lib/cmake/grpc)
set(ZLIB_ROOT ${CMAKE_CURRENT_BINARY_DIR}/zlib)
set(Protobuf_DIR ${_FINDPACKAGE_PROTOBUF_CONFIG_DIR})
set(c-ares_DIR ${CMAKE_CURRENT_BINARY_DIR}/c-ares/lib/cmake/c-ares)

set(PROTO_PATH ${PROJECT_SOURCE_DIR})
set(PROTO_PATH ${PROTO_PATH}/interfaces)
set(GENERATED_PROTOBUF_PATH ${PROJECT_SOURCE_DIR}/generated)

set(GENERATED_PROTOBUF_PATH /interfaces)
set(GENERATED_PROTOBUF_PATH ${PROJECT_SOURCE_DIR}/generated)

set(GENERATED_PROTOBUF_PATH "${PROJECT_SOURCE_DIR}/generated")

set(PROTO_LIST "MessageConverter")
set(PROTO_FILE_LIST ${PROTO_PATH})
foreach (loop_var RANGE 0)
    list(GET PROTO_LIST ${loop_var} PROTO_FILE_NAME)
    list(GET PROTO_FILE_LIST ${loop_var} PROTO_PATH)

    message("file name " ${PROTO_FILE_NAME})
    message("file path " ${PROTO_PATH})

    add_custom_command(
            OUTPUT "${PROTO_FILE_NAME}.pb.cc"
            "${PROTO_FILE_NAME}.pb.h"
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/protobuf/bin/protoc
            ARGS "--proto_path=${PROTO_PATH}"
            "--cpp_out=${GENERATED_PROTOBUF_PATH}"
            "${PROTO_PATH}/${PROTO_FILE_NAME}.proto"
    )

    list(APPEND GENERATED_FILES
            "${GENERATED_PROTOBUF_PATH}/${PROTO_FILE_NAME}.pb.cc"
            )

    list(APPEND OUT_FILES ${PROTO_FILE_NAME}.pb.cc ${PROTO_FILE_NAME}.pb.h)


endforeach (loop_var)

foreach (loop_var RANGE 0)
    list(GET PROTO_LIST ${loop_var} PROTO_FILE_NAME)
    list(GET PROTO_FILE_LIST ${loop_var} PROTO_PATH)

    message("file name " ${PROTO_FILE_NAME})
    message("file path " ${PROTO_PATH})

    if (WIN32)
        set(GRPC_PLUGIN_EXECUTABLE grpc_cpp_plugin.exe)
    else ()
        set(GRPC_PLUGIN_EXECUTABLE grpc_cpp_plugin)
    endif ()

    add_custom_command(
            OUTPUT "${PROTO_FILE_NAME}.grpc.pb.h"
            "${PROTO_FILE_NAME}.grpc.pb.cc"
            COMMAND ${CMAKE_CURRENT_BINARY_DIR}/protobuf/bin/protoc
            ARGS "--proto_path=${PROTO_PATH}"
            "--grpc_out=${GENERATED_PROTOBUF_PATH}"
            "--plugin=protoc-gen-grpc=${CMAKE_CURRENT_BINARY_DIR}/grpc/bin/${GRPC_PLUGIN_EXECUTABLE}"
            "${PROTO_PATH}/${PROTO_FILE_NAME}.proto"
    )

    list(APPEND GENERATED_FILES
            "${GENERATED_PROTOBUF_PATH}/${PROTO_FILE_NAME}.grpc.pb.cc"
            )

    list(APPEND OUT_FILES ${PROTO_FILE_NAME}.grpc.pb.cc ${PROTO_FILE_NAME}.grpc.pb.h)

endforeach (loop_var)

add_custom_target(application_header ALL DEPENDS ${OUT_FILES})

include_directories(${GENERATED_PROTOBUF_PATH})
include_directories(${CMAKE_CURRENT_BINARY_DIR}/protobuf/include)
include_directories(${CMAKE_CURRENT_BINARY_DIR}/grpc/include)

find_package(Threads)

link_directories(${CMAKE_CURRENT_BINARY_DIR}/grpc/lib ${CMAKE_CURRENT_BINARY_DIR}/protobuf/lib ${CMAKE_CURRENT_BINARY_DIR}/c-ares/lib ${CMAKE_CURRENT_BINARY_DIR}/zlib/lib)
link_libraries(grpc++_unsecure grpc++ grpc protobuf cares gpr zlibstatic Threads::Threads address_sorting)
if (WIN32)
    link_libraries(wsock32 ws2_32)
endif ()

set_source_files_properties(${GENERATED_FILES}
        PROPERTIES GENERATED TRUE)

add_executable(application main.cpp ${GENERATED_FILES})
add_dependencies(application application_header)
