  # -------------------
  # === Setup Paths ===
  # -------------------
  # relative path to the header files
  set(HEADER_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include) 

  #EDIT : Add all headers and sources individually
  set(LIB_HEADERS
    ${HEADER_DIR}/HelloWorldObject.h
  )
  set(LIB_SOURCES
    HelloWorldObject.cxx
  )
  #EDIT : The name of the library and dictionary to be generated if you don't want it to be the project name
  set(LIB_NAME HelloWorld)
  
  # --------------------------
  # === Generate Libraries ===
  # --------------------------
  # Generate the root dictionary
  root_generate_dictionary("G__${LIB_NAME}" ${LIB_HEADERS} LINKDEF LinkDef.h)

  # create the shared library
  add_library(${LIB_NAME} SHARED ${LIB_SOURCES} "G__${LIB_NAME}.cxx")
  include_directories(${HEADER_DIR})
  

  # copy  the .so file accesible in the ~/lib so ROOT can find it
  install(TARGETS ${LIB_NAME} DESTINATION $ENV{HOME}/lib) 
  # copy the _rdict.pcm dictionary file to the ~/lib so ROOT can find it with R__LOAD__LIBRARY() macros and gSystem->Load() commands
  install(FILES ${CMAKE_CURRENT_BINARY_DIR}/lib${LIB_NAME}_rdict.pcm DESTINATION $ENV{HOME}/lib)
  

  # The following is for adding the root map to your install directory. Only do this if you are confident you will never conflict with this library
  # Doing this removes the need to run R__LOAD__LIBRARY() macros and gSystem->Load() commands
  # Don't do this if you do not know what you are doing 
  # install(FILES ${CMAKE_CURRENT_BINARY_DIR}/lib${LIB_NAME}.rootmap DESTINATION $ENV{HOME}/lib)