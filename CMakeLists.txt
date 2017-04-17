cmake_minimum_required(VERSION 3.7)
project(HW1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp ViewAble.cpp Client.cpp ClientService.cpp PlayerService.cpp SimulationService.cpp)
add_executable(HW1 ${SOURCE_FILES} Client.h ViewAble.h Series.h Movie.h ClientService.h PlayerService.h SimulationService.h)