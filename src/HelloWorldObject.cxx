#include "HelloWorldObject.h"  //Include the corresponding file in the implementation file

#include <iostream>

// ClassImp
ClassImp(HelloWorldObject)  //* This is needed for dictionary generation
    HelloWorldObject::HelloWorldObject() {
  // root default constructors should set everything to blank /empty or zero for I/O purposes
  // std::vector and std::map can be set to {}
  // Raw pointers, std::shared_ptr<T> can all be set to 0
  fName = "";
  fNumIterations = 0;
}

HelloWorldObject::~HelloWorldObject() {
  // do nothing special
  // If you are doing stuff with raw pointers in your class,
  //   you might need to clean them up here
}

HelloWorldObject::HelloWorldObject(TString name, Int_t num) {
  fName = name;
  fNumIterations = num;
}

void HelloWorldObject::SayHello() const {
  for (Int_t nn = 0; nn < fNumIterations; ++nn) {
    printf("Hello %s!\n", fName.Data());
  }
}

void HelloWorldObject::SayGoodBye() const {
  for (Int_t nn = 0; nn < fNumIterations; ++nn) {
    printf("Bye %s!\n", fName.Data());
  }
}