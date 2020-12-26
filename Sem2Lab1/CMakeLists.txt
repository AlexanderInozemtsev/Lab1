cmake_minimum_required(VERSION 3.15)
project(Sem2Lab1)

set(CMAKE_CXX_STANDARD 20)

add_executable(Sem2Lab1 main.cpp Sorter/ISorter.h Sorter/BubbleSorter.h Sorter/ShakerSorter.h Sorter/InsertionSorter.h Sorter/SelectionSorter.h Sorter/Helper.h AutoTest/AutoTest.h IO/IO.cpp IO/IO.h AutoTest/AutoTestRun.h UI/UI.cpp UI/UI.h Graph.cpp)