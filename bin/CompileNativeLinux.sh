#!/usr/bin/env bash
g++ -shared -fPIC  -I$JAVA_HOME/include   -I$JAVA_HOME/include/linux   NativeCallsClass.cpp -o  libNativeCallsClass.so;