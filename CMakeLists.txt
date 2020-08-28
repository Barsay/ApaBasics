cmake_minimum_required(VERSION 3.16)
project(APA_Basics C)

set(CMAKE_C_STANDARD 99)

include_directories(Item)
include_directories(OnLineConnectivity)
include_directories(Recursive_Algorithms)

add_executable(APA_Basics main.c
        Basic_Algorithms/Basic_Algorithms.c Basic_Algorithms/Basic_Algorithms.h
        OnLineConnectivity/OnLineConnectivity.c OnLineConnectivity/OnLineConnectivity.h
        Recursive_Algorithms/Cooley_Tuckey_Quick_Ftt.cpp Item/item.c Item/item.h)