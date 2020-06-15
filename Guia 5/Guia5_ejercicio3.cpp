#include <iostream>
bool aniobisiesto();
using namespace std;
int main(void)
{
bool n;
cout << endl;
cout << "ANIO BISIESTO" << endl << endl;



if(aniobisiesto()){
cout << "El anio es bisiesto" << endl;
}else{
    cout<<"El anio no es bisisesto.";
}
return 0;
}
bool aniobisiesto()
{
int anio;
cout << "Digite el anio: ";
cin>> anio;
if ((anio%4 != 0) or ((anio%400 != 0) and (anio%100 == 0))){ 
return false;
}else{
    return true;
}


}
