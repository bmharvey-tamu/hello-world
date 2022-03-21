#include "HelloWorldObject.h"

Int_t main (){
  HelloWorldObject myHW("User", 3);
  myHW.SayHello();
  myHW.SetNumIterations(1);
  myHW.SayGoodBye();
  return 0;  
}