cmake_minimum_required(VERSION 3.2)

PROJECT (list)

INCLUDE_DIRECTORIES(
include
)

AUX_SOURCE_DIRECTORY(src SRC_LIST)

ADD_EXECUTABLE(list ${SRC_LIST})





