#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int main(){
    
    char palabra[20];
    string resp, a;
    int longuitud;
   

    cout<< "Ingrese su palabra: ";
    cin>> palabra;
 
    a= palabra[0];
    longuitud = strlen(palabra);
    
    if(palabra[0] == palabra [longuitud -1] ){
      resp = "La palabra comienza y termina con la misma letra, que es: " + a;
    }else{
        resp="La palabra no tiene la misma palabra al inicio y al final :(";
    }
    cout<<resp<<endl;
    return 0;
}