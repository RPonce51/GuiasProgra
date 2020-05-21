#include <iostream>

using namespace std;

int main(){
    int n;
while(n!=0){
        cout<< "Ingrese el numero";
        cin>> n;
        if (n>0){
            cout<<n<< " es un numero positivo "<<endl;
        }else if(n<0){
            cout<<n<<  " es un numero negativo"<< endl;
        }
    }
     cout<< "El numero 0 no es positivo ni negativo"<< endl;
    return 0;
}