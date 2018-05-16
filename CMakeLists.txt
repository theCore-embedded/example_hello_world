# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

cmake_minimum_required(VERSION 3.2)

# theCore framework directory must be set before build
message("Using theCore directory: ${CORE_DIR}")

# Required.
include(${CORE_DIR}/build_api.cmake)

# Obvious.
project(hello_world)

# Our demo sources.
add_executable(hello_world main.cpp)

# Some dependencies
target_link_libraries(hello_world the_core)

# Include theCore into the build process
add_subdirectory(${CORE_DIR} ${CMAKE_CURRENT_BINARY_DIR}/core)

# Produce complete binary, suitable for flashing to the target
strip_executable(hello_world)
