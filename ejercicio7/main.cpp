#include <iostream>
#include "string"
using namespace std;
int main () {
  int numero=0;
  do{
  cout<<"ingrese numero: \n";
  cin>>numero;
  }while(numero<10 || numero>30);
  for(int i=0;i<=(numero-1);i++)
  cout<<"*";
}
