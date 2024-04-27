cmake_minimum_required(VERSION 3.10)
project(tic_tac_toe)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall")

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)

add_library(board src/board.cpp)
add_library(player src/player.cpp)
add_executable(main src/main.cpp)
target_link_libraries(main board player)