# generate Th spectra example
# message ("LIB_NAME is {LIB_NAME}")
include_directories(${ROOT_INCLUDE_DIRS} ${CMAKE_CURRENT_SOURCE_DIR}/../src/include)

# make ./greet from sayHello.cpp
add_executable(greet sayHello.cpp)
# Add the library you just made to compile against, and add any required root libraries
target_link_libraries(greet PRIVATE HelloWorld ROOT::RIO ROOT::Net)

# other commong root libraries are  ROOT::MathCore ROOT::Hist ROOT::Gpad etc...

# If you want to install the executable to ~/bin
install(TARGETS greet DESTINATION $ENV{HOME}/bin)