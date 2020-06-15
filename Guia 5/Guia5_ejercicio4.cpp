#include <iostream>

using namespace std;

int main(){
    int d, m, a;
    char b;
    cout << "Ingrese la fecha actual: ";
    cin>>d>>b>>m>>b>>a;
    d = d + 1;
    
    if((m==1 or 3 or 5 or 7 or 8 or 10 or 12) and d==32){
    d = 1;
    m= m+1;
    }else if((m==1 or 3 or 5 or 7 or 8 or 10 or 12) and d>=33){
    cout<<"El día que ingreso es invalido";
    }else if((m==2 or 4 or 6 or 9 or 11) and d==31){
    d = 1;
    m= m+1;
    }else if((m==4 or 6 or 9 or 11) and d>=32){
    cout<<"El día que ingreso es invalido";
    }else if((m==2) and ((a%400==0) or (a%4==0 and a%100!=0))and d==30){
    d = 1;
    m= m+1;
    }else if((m==2) and ((a%400==0) or (a%4==0 and a%100!=0))and d<=31){
    cout<<"El día que ingreso es invalido";
    }else if((m==2) and ((a%4!=0) or (a%400!=0 and a%100==0))and d==29){
    d = 1;
    m= m+1;
    }else if((m==2) and ((a%4!=0) or (a%400!=0 and a%100==0))and d<=30){
    cout<<"El día que ingreso es invalido";
    }
    if(m==13){
        m=1;
        a= a + 1;
    }else if (m<=14){
        cout<<"El mes que ingreso es invalido";
    }
    cout<< "El dia de manana es :"<< d<<b<<m<<b<<a;
    return 0;
}
