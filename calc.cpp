#include <iostream>
#include "header.h"

int Calc::sum(){
  s = mat + sci + soc;
  return s;
}

int Calc::avg(){
  a = (mat + sci + soc)/3;
  return a;
}
