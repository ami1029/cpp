#include <iostream>
#include "header.h"

int main(){
  int total,avg;

  Calc calc;
  total = calc.sum();
  avg = calc.avg();

  cout<<"合計 = "<<total<<"  平均 = "<<avg<<endl;
}
