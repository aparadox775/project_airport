cmake_minimum_required(VERSION 3.0)

project(airport)

# C++11 standards
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_executable(${PROJECT_NAME}
    
    src/main.cpp
    src/airplane.cpp
    src/pasengerAirplane.cpp
    src/pilot.cpp
    src/proPilot.cpp
    src/unexperiencedPilot.cpp
    src/cargoAirplane.cpp
    src/flight.cpp








)

target_include_directories(${PROJECT_NAME} PUBLIC include/)