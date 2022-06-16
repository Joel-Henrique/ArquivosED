/*Escreva uma fun ̧c ̃ao recursiva que determina se um vetor de caracteres  ́e um pal ́ındromo. A
fun ̧c ̃ao recebe como parˆametros o tamanho e o vetor e deve retornar true ou false.*/
using namespace std;
#include <iostream>

bool auxpalindromo(char str[],int inicio,int fim){
    
    if(inicio >= fim)
        return true;
    if(str[inicio] != str[fim])
        return false;
    return auxpalindromo(str,inicio+1,fim-1);
    
}



bool palindromo(char str[],int n){
   return auxpalindromo(str,0,n-1);
}





int main()
{
    char str[10]= "arara" ;
    cout << palindromo(str ,5);
    

    return 0;
}
