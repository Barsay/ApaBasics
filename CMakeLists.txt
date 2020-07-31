cmake_minimum_required(VERSION 3.16)
project(APA_Basics C)

set(CMAKE_C_STANDARD 99)

add_executable(APA_Basics main.c Library/APABasics_Library.c Library/APABasics_Library.h OnLineConnectivity/OnLineConnectivity.c OnLineConnectivity/OnLineConnectivity.h)