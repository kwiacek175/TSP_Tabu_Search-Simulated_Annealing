cmake_minimum_required(VERSION 3.30)
project(TSP_Tabu_Search_Simulated_Annealing)

set(CMAKE_CXX_STANDARD 20)

add_executable(TSP_Tabu_Search_Simulated_Annealing src/app/main.cpp
        inc/structures/Graph.h
        src/structures/Graph.cpp
        inc/ui/Menu.h
        src/ui/Menu.cpp
        inc/algorithms/SimulatedAnnealing.h
        src/algorithms/SimulatedAnnealing.cpp
        inc/algorithms/TabuSearch.h
        src/algorithms/TabuSearch.cpp)

target_include_directories(TSP_Tabu_Search_Simulated_Annealing PRIVATE inc)