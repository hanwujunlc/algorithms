cmake_minimum_required(VERSION 3.2)

PROJECT (list)

INCLUDE_DIRECTORIES(
include
)

SET(SRC_LIST main.cpp singleList.cpp) 

EXEC_PROGRAM(ls ARGS `../*.cpp` OUTPUT_VARIABLE LS_OUTPUT RETURN_VALUE LS_RVALUE)

IF(LS_OUTPUT)
    MESSAGE(STATUS "ls result: " ${LS_OUTPUT}) # 缩进仅为美观,语法无要求
ENDIF(LS_OUTPUT)



ADD_EXECUTABLE(list ${SRC_LIST})





