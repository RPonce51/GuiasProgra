#include <iostream>

using namespace std;

int main()
{
    int a, b;
 

    while(b!=0){
           cout<< "Ingrese el numero a dividir: ";
    cin>> a;
    cout << "Ingrese el divisor: ";
    cin>> b;
        if( a % b ==0){
            cout<< "Los numeros si son divisibles entre ellos"<<endl;
        }else{
            cout<< "Los numeros no son divisibles entre ellos"<< endl;
        }
           
    }
    
 cout<< "0 no puede ser divisor";
    return 0;
}
