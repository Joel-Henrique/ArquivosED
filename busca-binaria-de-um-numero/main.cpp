/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;


bool auxbuscaBinaria(int vet[],int n,int chave,int inicio){
    if(chave == vet[n] && chave >= vet[inicio]){
        return true;
    }
    if(chave <= vet[n]){
        return auxbuscaBinaria(vet,n-1,chave,inicio);
    }
    else
        return false;
    
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