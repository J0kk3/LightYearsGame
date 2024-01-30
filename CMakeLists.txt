cmake_minimum_required(VERSION 3.22.1)

project(LightYears
    VERSION 1.0.0
    LANGUAGES C CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_CXX_EXTENSIONS OFF)

option(USE_CPM "Whether to use CPM" ON)
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
#Dynamically download CPM.cmake if not present
set(CPM_DOWNLOAD_VERSION 0.38.7)
if(NOT EXISTS ${CMAKE_BINARY_DIR}/cmake/CPM.cmake)
file(DOWNLOAD https://github.com/cpm-cmake/CPM.cmake/releases/download/v${CPM_DOWNLOAD_VERSION}/CPM.cmake ${CMAKE_BINARY_DIR}/cmake/CPM.cmake)
endif()
include(${CMAKE_BINARY_DIR}/cmake/CPM.cmake)
# Include the CPM mopdule
include(cmake/CPM.cmake)

include(FetchContent)
set(SFML_LIB_NAME SFML)

if(USE_CPM)
    message(STATUS "Using CPM")
    include(CPM)
    cpmaddpackage("gh:SFML/SFML#2.6.1")
else()
    message(STATUS "Using FetchContent")
    FetchContent_Declare(
        ${SFML_LIB_NAME}
        GIT_REPOSITORY https://github.com/SFML/SFML
        GIT_TAG 2.6.1
        GIT_SHALLOW FALSE)
    FetchContent_MakeAvailable(${SFML_LIB_NAME})
endif()

set(LIGHT_YEARS_GAME_TARGET_NAME LightYearsGame)

add_subdirectory(LightYears)