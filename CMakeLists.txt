# This file is responsible for discovering components and configuring build.
cmake_minimum_required(VERSION 3.31)

# Use idf shipped with this repo if IDF_PATH environment variable not set.
# Allows user to skip fetching the heavy idf submodule if already on system.
if(NOT DEFINED ENV{IDF_PATH})
  message(STATUS "Using project's idf.")
  set(ENV{IDF_PATH} ${CMAKE_CURRENT_LIST_DIR}/esp-idf)
else()
  message(STATUS "Using provided idf at $ENV{IDF_PATH}.")
endif()

set(IDF_TARGET esp32s3)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)

# Build only the minimal set of components, main, and anything it depends on.
idf_build_set_property(MINIMAL_BUILD ON)

project(firment-example-esp)
