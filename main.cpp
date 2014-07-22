#include <iostream>
#include "header.h"

int main(){
  int total,avg;
  int mat, soc, sci;
  
  Math math;
  Social social;
  Science science;
  
  mat = math.matread();
  soc = social.socread();
  sci = science.sciread();

  total = mat + soc + sci;
  avg = total/3;
  cout<<"合計 = "<<total<<"  平均 = "<<avg<<endl;
}
