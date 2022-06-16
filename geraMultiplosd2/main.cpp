void auxeraMultiplos2(int n, int limite, int v[], int tam,int k){
    if(k < tam){
        if(n < limite){
            v[k] = n;
            return auxeraMultiplos2(n*2,limite,v,tam,k+1);
        }
        else
            return auxeraMultiplos2(n/2,limite,v,tam,k+1);
    }
}


void geraMultiplos2(int n, int limite, int v[], int tam){
    int k=0;
    return auxeraMultiplos2(n,limite,v,tam,k);
    
}

#include <stdio.h>

int main()
{
    int n=100,limite=1000,v[8],tam=8;
    geraMultiplos2(n,limite,v,tam);
    return 0;
}
