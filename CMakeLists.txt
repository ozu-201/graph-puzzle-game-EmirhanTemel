cmake_minimum_required(VERSION 3.17)
project(graph-puzzle-game-EmirhanTemel)

set(CMAKE_CXX_STANDARD 17)

add_executable(graph-puzzle-game main.cpp Edge.cpp Edge.h EdgeList.cpp EdgeList.h Graph.cpp Graph.h Node.cpp Node.h Queue.cpp Queue.h)