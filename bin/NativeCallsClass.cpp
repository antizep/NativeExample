#include<iostream>
#include "NativeCallsClass.h"

JNIEXPORT void JNICALL Java_NativeCallsClass_printOne
  (JNIEnv *, jclass){
	std::cout << "One" << std::endl;
  }
JNIEXPORT void JNICALL Java_NativeCallsClass_printTwo
  (JNIEnv *, jclass){
	  std::cout << "Two" << std::endl;
  }
     

