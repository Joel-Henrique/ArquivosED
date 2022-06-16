#include <iostream>
using namespace std;
#include <stdio.h>
void trocaMaior(int vet[], int n, int *m){
    *m = vet[0];
    for(int i=0;i<n;i++){
        if(vet[i]> *m){
            *m= vet[i];
            break;
        }
    }
    vet[0] = *m;
    cout << "primeira posicao do vetor: " << vet[0] << endl;
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
    cout <<"Valor de m: "<< m;
    return 0;
}
