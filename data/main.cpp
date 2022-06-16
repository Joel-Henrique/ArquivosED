#include <iostream>
#include "data.h"
using namespace std; 
int main(){
    int d,m,a;
    cout<<"dia: ";cin >>d;cout <<"mes: ";cin >> m;cout <<"ano: " ;cin >>a;
    data DATA(d,m,a);
    data * DATA2 = DATA.somaanos(12);
    DATA2->imprime();
    delete DATA2;
    
}