cmake_minimum_required(VERSION 3.16)
project(heureka CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(heureka
    AAF.cpp
    collector.cpp
    heureka.cpp
    heuristic.cpp
    heuristic_centrality.cpp
    heuristic_deg.cpp
    heuristic_exp.cpp
    heuristic_scc.cpp
    parser.cpp
    solver_complete.cpp
    solver_grounded.cpp
    solver_stable.cpp
    test.cpp
)

target_include_directories(heureka PRIVATE /opt/homebrew/opt/eigen/include/eigen3)

target_compile_options(heureka PRIVATE -Wall -Wextra -Wreturn-type)