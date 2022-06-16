#include <iostream>
#include "NumeroAleatorio.h"

using namespace std;
NumeroAleatorio::NumeroAleatorio(int s, int min, int max)
{
   setSemente(s);
   if(min == max){
       cout << "Os limites minimo e maximo devem ser diferentes!";
       exit(1);
   }
   else if(min > max){
       minimo = max;
       maximo = min;
   }
   else{
       minimo = min;
       maximo = max;
   }
}
 
void NumeroAleatorio::setSemente(int s)
{
   if(s > 0 && s < 101)
        semente = s;
   else{
       cout << "Semente invalida!";
       exit(1);
   } 
}
 
int* NumeroAleatorio::proximos(int n)
{
   int *numeros = new int[n];
   int anterior = semente;  //33
   for(int i = 0; i < n; i++){  // n = 10
       numeros[i] = (7*anterior + 13) % 101; //n[1] = (7*33+13) %101 == 42
       anterior = numeros[i];
   }
    for(int i = 0; i < n; i++) // n=10
       numeros[i] = minimo + numeros[i] % (maximo-minimo); //n[1] = 0 + 42 % 17 = 11
   return numeros;
}