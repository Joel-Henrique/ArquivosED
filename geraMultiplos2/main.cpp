#include <iostream>
using namespace std;

void auxeraMultiplos2(int n, int limite,int v[],int tam,int inicio ){
    if(inicio < tam){
        if(n < limite){
            v[inicio] = n;
            return auxeraMultiplos2(n*2,limite,v,tam,inicio+1);
        }
        else
            return auxeraMultiplos2(n/2,limite,v,tam,inicio+1);
    }
}


void geraMultiplos2(int n, int limite, int v[]){
    int inic=0,tam = 10;
    auxeraMultiplos2(n,limite,v,tam,inic);
}

#include <stdio.h>

int main()
{
    int vet[10];
    int n,limite;
    //cout>>"digite o numero";
    cin>>n;
    //cout>>"digite o limite";
    cin>>limite;
    geraMultiplos2(n,limite,vet);
    
    for(int i;i<10;i++){
        cout<< vet[i];
    }
    return 0;
}

