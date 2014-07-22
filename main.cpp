#include <iostream>
#include "header.h"

int main(){
  int total,avg;

  Math math;
  Social social;
  Science science;

  math.announce();
  math.read();
  int math_score = math.getScore();
  social.announce();
  social.read();
  int social_score = social.getScore();
  science.announce();
  science.read();
  int science_score = science.getScore();
  
  total = science_score + social_score + math_score;
  avg = total/3;

  cout<<"合計 = "<<total<<"  平均 = "<<avg<<endl;
}
