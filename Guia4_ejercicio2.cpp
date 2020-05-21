#include <iostream>

using namespace std;

int main(){
    int n;


        cout<< "Ingrese el numero: ";
        cin>> n;
        if (n==0){
            cout<< "metiste el numero 0";
            
        }else if(n%2==0){
            cout<< "El numero "<<n<<" es par"<< endl;
        }else{
            cout<< "El numero "<< n<< " es impar"<<endl;
        }
    
    

    return 0;
}
