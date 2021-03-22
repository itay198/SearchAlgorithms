cmake_minimum_required(VERSION 3.16)
project(SearchAlgorithms)

set(CMAKE_CXX_STANDARD 14)

add_executable(SearchAlgorithms main.cpp server_side/Server.cpp server_side/Server.h ClientHandler.h Solver.cpp Solver.h CacheManager.h MyTestClientHandler.cpp MyTestClientHandler.h)