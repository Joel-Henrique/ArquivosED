/******************************************************************************

Escreva uma fun ̧c ̃ao recursiva que fa ̧ca a busca por uma chave (um valor espec ́ıfico) em um
array ordenada usando o algoritmo da busca bin ́aria. A fun ̧c ̃ao recebe como parˆametros o array
de inteiros, seu tamanho e a chave a ser procurada e deve retornar se encontrou ou n ̃ao o valor
da chave.

*******************************************************************************/
using namespace std;
#include <iostream>

bool auxbuscaBinaria(int vet[],int n,int chave,int inicio){
    
    if(chave == vet[n])
        return true;
    if(n == inicio && chave != vet[n]){
        return false;
    }
    else
        return auxbuscaBinaria(vet,n-1,chave,inicio);
    
}

bool buscaBinaria(int vet[], int n, int chave){
    int inicio=0;
    return auxbuscaBinaria(vet, n, chave,inicio);
}



int main() {
    int vet[] = {4, 5, 6};
    int chave;
    cin >> chave;
    cout<<buscaBinaria(vet,2,chave);
    
return 0;
}