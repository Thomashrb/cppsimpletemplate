cmake_minimum_required(VERSION 3.5)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_compile_options(-Wall -Wextra -pedantic) # -Werror
set(CMAKE_CXX_FLAGS_DEBUG_INIT "-g -O0")

# This is your project statement. You should always list languages;
# Listing the version is nice here since it sets lots of useful variables
project(
  simpletemplate
  VERSION 0.01
  LANGUAGES CXX)

# add dependencies using (maximum) CPM
include(cmake/CPM.cmake)
CPMAddPackage("gh:catchorg/Catch2@3.2.0")

# allow tests to be ran/picked up by (c)make/test -- has to be called before any setup of tests
enable_testing()

# include CMakeList from test and src directory
add_subdirectory(src)
add_subdirectory(test)
