cmake_minimum_required(VERSION 3.17)
project(Ordered_Lists_lab)

set(CMAKE_CXX_STANDARD 14)

include_directories(tests)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}")

add_executable(ArrayListsDriver
        ArrayListDriver.cpp
        ArrayADTList.h
        Customer.h
        Customer.cpp
        Date.h
        Date.cpp
)

add_executable(LinkedListDriver
        LinkedListDriver.cpp
        LinkedADTList.h
        Customer.h
        Customer.cpp
        Date.h
        Date.cpp
)

add_executable(ArrayTest
        tests/array_test.cpp
        ArrayADTList.h )

add_executable(LinkedTest
        tests/linked_test.cpp
        LinkedADTList.h )
