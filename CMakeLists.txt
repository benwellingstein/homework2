cmake_minimum_required(VERSION 3.5)
project(homework2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    libex1/apartment.h
    libex1/apartment_service.h
    libmtm/list.h
    libmtm/map.h
    libmtm/mtm_ex2.h
    libmtm/set.h
    list_example_test.c
    list_mtm.h
    test_utilities.h)

add_executable(homework2 ${SOURCE_FILES})