cmake_minimum_required(VERSION 3.14)
project(self)

set(CMAKE_CXX_STANDARD 14)

find_package(Protobuf REQUIRED)
if(PROTOBUF_FOUND)
    message(STATUS "protobuf library found")
else()
    message(FATAL_ERROR "protobuf library is needed but cant be found")
endif()

include_directories(${PROTOBUF_INCLUDE_DIRS})
PROTOBUF_GENERATE_CPP(PROTO_SRCS PROTO_HDRS test_proto/test.proto)

add_executable(self main.cpp header.h move.h reference_change_private_variable.h test_proto/protobuf.h ${PROTO_SRCS} ${PROTO_HDRS} unique_ptr.h)

target_link_libraries(self ${PROTOBUF_LIBRARIES})