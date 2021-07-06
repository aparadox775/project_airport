cmake_minimum_required(VERSION 3.0)

# --- Fetch FTXUI --------------------------------------------------------------
include(FetchContent)

set(FETCHCONTENT_UPDATES_DISCONNECTED TRUE)
FetchContent_Declare(ftxui
  GIT_REPOSITORY https://github.com/ArthurSonzogni/ftxui
  GIT_TAG 91c5954fe27eb020e2de422be53c5fe0c9c6cd6b
)

FetchContent_GetProperties(ftxui)
if(NOT ftxui_POPULATED)
  FetchContent_Populate(ftxui)
  add_subdirectory(${ftxui_SOURCE_DIR} ${ftxui_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()

# ------------------------------------------------------------------------------
project(airport)

# C++11 standards
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_executable(${PROJECT_NAME}
    src/mainmenu.cpp
    src/main.cpp
    src/airplane.cpp
    src/pasengerAirplane.cpp
    src/pilot.cpp
    src/proPilot.cpp
    src/unexperiencedPilot.cpp
    src/cargoAirplane.cpp
    src/flight.cpp
    src/idGen.cpp








)

target_include_directories(${PROJECT_NAME} PRIVATE include src)
target_link_libraries(${PROJECT_NAME}
  PRIVATE ftxui::screen
  PRIVATE ftxui::dom
  PRIVATE ftxui::component # Not needed for this example.
)
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 17)

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION "bin")