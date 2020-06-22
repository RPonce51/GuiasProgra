#include <iostream>

using namespace std;


double* suma(int n, int vector1[],int vector2[]);

double* suma(int n, double vector1[], double vector2[]){
    static double vector3[10000000];
    for(int i=0; i<n; i++){
        vector3[i]= vector1[i]+vector2[i];
    }
    return vector3;
    
}
int main(){
    
    int n;
    cout<< "Ingrese el tamanio de los arreglos: ";
    cin >> n;
    double vector1[n], vector2[n], vector3[n];

    for(int i=0; i<n; i++){
        cout<< "Ingrese el elemento "<<i+1<<" para el arreglo 1: ";
        cin>> vector1[i];
    }
    cout<< endl;
    for(int i=0; i<n; i++){
        cout<< "Ingrese el elemento "<<i+1<<" para el arreglo 2: ";
        cin>> vector2[i];
    }
    double *a;
    a = suma(n, vector1, vector2);
    cout<<"El arreglo resulta: [";
    for(int i=0; i<n; i++){
        cout<< *(a+i)<<" ";
        }
        cout<<"]";
    return 0;
}
