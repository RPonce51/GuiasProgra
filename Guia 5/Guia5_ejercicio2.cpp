#include <iostream>
#include <ctime>
using namespace std;

int main(){
    time_t t =time(0);
    tm * now = localtime(&t);
    cout<< now->tm_hour<< ":"<<now->tm_min<<":"<<(now->tm_sec + 1);
    return 0;
}