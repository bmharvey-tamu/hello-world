#ifdef __CLING__
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link C++ nestedclasses;

// The + improves streamer functionality
// A - removes the streamer functionality
// A ! removes the >> operator
#pragma link C++ class HelloWorldObject+; 

#endif