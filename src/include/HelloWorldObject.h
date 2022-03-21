//* Always protect your header file
#ifndef RPT_HELLOWORLD_H
#define RPT_HELLOWORLD_H

#include "TObject.h"
#include "TString.h"

// Class declaration
// *All objects must inheirent from TOBject to get the ClassDef and ClassImp macros for dictionary generation
class HelloWorldObject : public TObject {
  // protected

  // data members
  TString fName;         // lowercase f followed by camel-case is root codiing convention for data members
  Int_t fNumIterations;  // use root basic types

 public:
  //* The first few functions in public should be
  //* constructors including, at least, a default constructor and the destructor
  HelloWorldObject();                         // Default constructor
  ~HelloWorldObject();                        // Destructor
  HelloWorldObject(TString name, Int_t num);  // Overloaded constrcutor

  // other functions declarations
  void SayHello() const;  // functions should be declared const when they do not change any of the data members
  void SayGoodBye() const;
  void SetNumIterations(Int_t new_num) { fNumIterations = new_num; }  // not const, and short enough to define here

  // ClassDef
  ClassDef(HelloWorldObject, 1);  //* This is needed to generate the dictionary
};

#endif