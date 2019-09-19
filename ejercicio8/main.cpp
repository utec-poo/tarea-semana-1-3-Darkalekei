#include<iostream>
using namespace std;
int main(){
 int x=0;
 do{
  cout<<"ingrese numero: \n";
  cin>>x;
  }while(x<1 || x>30);
 for(int i=1;i<=x;i++){
  for(int j=1;j<=x-i;j++)
  cout<<" ";
  for(int j=1;j<=2*i-1;j++)
  cout<<"*";
 cout<<endl;
 }
 return(0);
}
