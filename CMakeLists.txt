# require cmake version
cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

#create a project with a name and optional version number
project(HelloWorld VERSION 1.0.0)


#set up ROOT 6 variables to integrate into C/C++ projects
find_package(ROOT REQUIRED)
include(${ROOT_USE_FILE})
include_directories(${ROOT_INCLUDE_DIRS})


# Add all Subdirectories/Modules here 

# Generate the shared libraries and define install paths
add_subdirectory(src)

# Generate any executables 
add_subdirectory(executables)