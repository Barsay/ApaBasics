cmake_minimum_required(VERSION 3.16)
project(APA_Basics C)

set(CMAKE_C_STANDARD 99)

add_executable(APA_Basics main.c
        Recursive_Basic_Algorithms/Recursive_Basic_Algorithms.c Recursive_Basic_Algorithms/Recursive_Basic_Algorithms.h
        OnLineConnectivity/OnLineConnectivity.c OnLineConnectivity/OnLineConnectivity.h)