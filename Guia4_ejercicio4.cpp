#include <iostream> 
#include <string>
using namespace std;

int main (){
    string a, resp1, resp2;
    cout << "Ingrese su palabra: ";
    cin>>a;
  if(a.length() <= 10 ){
      resp1 = "Su palabra no es mayor de 10 caracteres";
  }else{
      resp1 = "Su palabra es mayor de 10 caracteres";
  }
  if (a.length()%2 ==0){
      resp2 = "es una palabra par";
  }else{
      resp2 = "es una palabra impar";
  }
  cout<< resp1<< " y "<< resp2<< endl;

  
    return 0;
}