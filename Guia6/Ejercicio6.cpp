#include <iostream>

using namespace std;
int main(){
int n, x, a=0;
    cout<< "Ingrese el tamanio del arreglo: ";
    cin >> n;
    int vector[n];

    for(int i=0; i<n; i++){
        cout<< "Ingrese el elemento "<<i+1<<": ";
        cin>> vector[i];
    }


    cout<< "Ingrese el numero que desea contar: ";
    cin >> x;

    for(int i=0; i<n;i++){
        if(vector[i]==x){
            a++;
        }
    }
        if(a!=0){
            cout<< "El numero "<<x<< " se repite "<<a<<" veces";
        }else{
            cout<<"El numero "<<x << " no se encuentra en el arreglo";
    }

return 0;
}