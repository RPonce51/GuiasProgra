#include <iostream>

using namespace std;

int main(){
    int n;

    while(n!=0){
        cout<< "Ingrese el numero: ";
        cin>> n;
        if (n % 2 ==0){
            cout<< "El numero es par"<<endl;
        }else{
            cout<< "El numero es impar"<< endl;
        }
    }
    cout<< "metiste el numero 0";

    return 0;
}
