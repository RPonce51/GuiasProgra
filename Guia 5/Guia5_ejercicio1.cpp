#include <iostream>
int calcular();
using namespace std;

int main(){


cout<< "El MCD es: "<< calcular();
}
int calcular(){
    int mayor, menor, residuo;
    cout<<"Digite el numero mayor: ";
    cin>> mayor;
    cout<<"Digite el numero menor: ";
    cin>> menor;
    do{
        residuo = mayor%menor;
        if(residuo!=0){
            mayor=menor;
            menor=residuo;
        }
        
    }
    while(residuo !=0);
  return menor;

}