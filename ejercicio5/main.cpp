#include <iostream>
#include "string"
using namespace std;
int main(){
  int numero=0,control=0,par=0,impar=0;
  do{
    cout<<"ingrese numero: \n"; 
    cin>>numero;
    control++;
    if (numero%2==0)
      par++;
    else
      impar++;
  }while(numero!=0);
  cout<<"los numeros ingresados son "<<control-1<<"\n";
  cout<<"son pares "<<par-1<<" numeros \n";
  cout<<"son impares "<<impar<<" numeros\n";
}
