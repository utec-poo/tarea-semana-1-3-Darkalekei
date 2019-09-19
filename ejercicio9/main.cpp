#include<iostream>
using namespace std;
int main(){
  int segundos=0,horas=0,min=0,minutos=0,seg=0;
  do{
  cout<<"ingrese la cantidad de segundos: \n"; 
  cin>>segundos;
  }while(segundos<=0);
  horas=segundos/3600;
  min=segundos%3600;
  minutos=min/60;
  seg=min%60;
  cout<<"hora: "<<horas<<"\n";
  cout<<"minutos: "<<minutos<<"\n";
  cout<<"segundos: "<<seg<<"\n";
}
