#include <iostream>
#include "NumeroAleatorio.h"
using namespace std; 

int main(){
   NumeroAleatorio gerador(33, 3, 20);
   int *numeros = gerador.proximos(10);
   cout << "Numeros gerados: ";
   for(int i = 0; i < 10; i++)
       cout << numeros[i] << " ";
   delete [] numeros;
   cout<<endl;
   /*
   int val=((7*33+13) %101);
   cout<<val<<endl;
   val = 0 + 42 % 17;
   cout<<val<<endl;
   */
   
   return 0;
}

