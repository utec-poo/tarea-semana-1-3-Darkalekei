#include <iostream>
#include "string"

using namespace std;

int main(){
    char letra;
    int numero;
    string color;
    do{
        cout<<"Ingresa una letra: \n";
        cin>>letra;
    }while(letra>'h'|| letra<'a');
    do{
        cout<<"Ingresa un numero: \n";
        cin>>numero;
    }while(numero>8 || numero<1);
    if(letra=='a' || letra=='c'||letra=='e'||letra=='g')
        if(numero%2!=0)
            color="negro";
        else
            color="blanco";
    else
        if (numero%2== 0)
            color = "negro";
        else
            color = "blanco";

    cout<<"La posicion "<<letra<<numero<<" tiene un color: "<<color;
    return 0;
}
