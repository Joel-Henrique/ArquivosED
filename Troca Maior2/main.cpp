#include <iostream>
using namespace std;
#include <stdio.h>
 
void trocaMaior(int vet[], int n, int *m){
    *m = vet[0];
    int aux= vet[0],j;
    for(int i=0;i<n;i++){
        if(vet[i]> *m){
            *m= vet[i];
            break;
        }
    }
    
    vet[j] = aux;
    vet[0] = *m;
    for(int i=0;i<n;i++){
        cout <<"posicao " << i << " do vetor: "<< vet[i]<<endl;
    }
    
    //Maior elemento do vetor
    for(int i=0;i<n;i++){
        if(vet[i] > *m){
            *m = vet[i];
        }
    }
    
    
    
}
int main()
{
    int n,m;
    int *vet;
    vet = new int[n];
    
    cout << "Informe a quantidade de elementos do vetor: " << endl;
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "digite a " << i+1 <<" posicao do vetor" <<endl;
        cin >> vet[i];
    }
    trocaMaior(vet,n,&m);
    cout <<"o valor do Maior elemento:  "<< m;
    delete [] vet;
    return 0;
}

