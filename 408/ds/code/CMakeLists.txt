cmake_minimum_required(VERSION 3.0.0)
project(DataStructure VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

set(PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

add_library(DataStructure
    ${PROJECT_SOURCE_DIR}/list/seq_list.h
    ${PROJECT_SOURCE_DIR}/list/seq_list.h
    ${PROJECT_SOURCE_DIR}/list/single_linked_list.h
    ${PROJECT_SOURCE_DIR}/list/single_linked_list.cpp
    ${PROJECT_SOURCE_DIR}/stack/seq_stack.h
    ${PROJECT_SOURCE_DIR}/stack/seq_stack.cpp
    ${PROJECT_SOURCE_DIR}/stack/linked_stack.h
    ${PROJECT_SOURCE_DIR}/stack/linked_stack.h
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
