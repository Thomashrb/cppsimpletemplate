add_executable(simpletemplate main.cpp)
add_library(simpletemplate_lib simplemath.cpp simpleconstants.hpp)

# expose library files (used in testing)
target_include_directories(simpletemplate_lib PUBLIC .)
