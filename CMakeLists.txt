# This file is responsible for discovering components and configuring build.
cmake_minimum_required(VERSION 3.31)

# Use idf shipped with this repo if IDF_PATH environment variable not set.
# Allows user to skip fetching the heavy idf submodule if already on system.
if(NOT $ENV{IDF_PATH})
  set(ENV{IDF_PATH} esp-idf)
endif()
include($ENV{IDF_PATH}/tools/cmake/project.cmake)

# Build only the minimal set of components, main, and anything it depends on.
idf_build_set_property(MINIMAL_BUILD ON)

project(firment-example-esp)
