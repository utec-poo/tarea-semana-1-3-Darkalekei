#include <iostream>
#include <string>
using namespace std;
int main() {
  string zona;
  double a=212,b=170,c=136,d=59;
  int precio=0,paga=0;
  cout<<"ingrese Zona:\n";
  cin>>zona;
  cout<<"Precio (1,2,3,4)\n";
  cin>>precio;
   if (zona=="claro"){
    a=a*20/100;
    b=b*20/100;
    c=c*20/100;
    d=d*20/100;
   }
  switch(precio){
    case 1:
      cout<<"El precio es "<<a<<" soles";
        break;
    case 2:
      cout<<"El precio es "<<b<<" soles";
        break;
    case 3:
      cout<<"El precio es "<<c<<" soles";  
        break;
    case 4:
      cout<<"El precio es "<<d<<" soles";
        break;
    default:
      cout<<"error";
        break;
    }
  return 0;
}
