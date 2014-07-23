#include <iostream>
#include "header.h"

int main(){
  int p, q;
  int sum, tax;
  Price price;
  Quantity quantity;

  price.ask();
  price.read();
  p = price.get();
  quantity.ask();
  quantity.read();
  q = quantity.get();

  sum = p * q;
  tax = sum * 1.08;

  cout<<"合計金額 "<<sum<<"  消費税込みで "<<tax<<endl;

}
