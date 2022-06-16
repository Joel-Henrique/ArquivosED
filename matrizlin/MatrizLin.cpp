#include <iostream>
#include <cstdlib>

#include "MatrizLin.h"

using namespace std;

MatrizLin::MatrizLin(int mm,int nn){
    cout << "Criando um objeto MatrizLin" << endl<< endl;
    
    int i=0,j=0;
    nl = mm;
    nc = nn;
    tam = 0; // tam no construtor
    if(nl > 4 && nc > 4){ //preenche a matriz se ela for maior q 4x4
        vet = new int[(nl*nc)/2]; // cria o vet
        int k = detInd(i, j);
        for(i = 0; i < nl; i++){    
            for(j = 0; j < nc; j++){
                k = detInd(i, j);
                if(k>=0){
                    int val = 1; //aki fica o cin pra preencher a matriz
                    vet[k] = val;
                    tam++; 
                }
            }
        }
    }
    else
        cout << "a ordem da matriz n é suficiente"<< endl;
}

MatrizLin::~MatrizLin(){
    cout << "Destruindo um objeto MatrizLin" << endl;
    delete [] vet;
}

int MatrizLin::detInd(int i, int j){
    if(i >= 0 && i < nl && j >= 0 && j < nc){
        if((j >= (nc/2) && i < (nl/2)) || (i>=(nl/2) && j<(nc/2)))
            return -2;
        else if(i<(nl/2))
            return (nc/2)*i + j;
        else 
            return (nc/2)*i + j-(nc/2);
    }
    else
        return -1;
}

float MatrizLin::get(int i, int j){
    int k = detInd(i, j);
    if(k >= 0)
        return vet[k];
    else if(k = -2)
        return 0; 
    else{
        cout << "aaa" << endl;
        exit(1);
   }
}

void MatrizLin::set(int i, int j, float val){
    int k = detInd(i, j);
    if(k != -1 && get(i,j) >= 0){
        vet[k] = val;
    }
    else if(k != -1){ //
        vet[k] = val;
    }else
        cout << "bb" << endl;
}

void MatrizLin::imprimevet(){
    for(int u=0;u < tam;u++)
        cout<< vet[u]<<" ";
    cout<<endl;
}

void MatrizLin::imprime(){
    for(int i = 0; i < nl; i++){
        for(int j = 0; j < nc; j++){
            float val = get(i, j);
            cout << val << "\t";
        }
        cout << endl;
    }
}

