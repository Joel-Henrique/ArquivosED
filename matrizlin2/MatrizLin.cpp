#include <iostream>
#include <cstdlib>

#include "MatrizLin.h"

using namespace std;

MatrizLin::MatrizLin(int mm, int nn)
{
    cout << "Criando um objeto MatrizLin" << endl;
    nl = mm;
    nc = nn;
    if(nl>4 && nc>4){
        vet = new int[nl*nc];
        tam = 0;
    }
    else
        cout << "a ordem da matriz n é suficiente"<< endl;
}

MatrizLin::~MatrizLin()
{
    cout << "Destruindo um objeto MatrizLin" << endl;
    delete [] vet;
}

int MatrizLin::detInd(int i, int j)
{
    if(i >= 0 && i < nl && j >= 0 && j < nc){
        if((j >= (nc/2) && i < (nl/2)) || (i>=(nl/2) && j<(nc/2)))
            return -2;
        else 
            return nc*i + j;
    }
    else
        return -1;
}

float MatrizLin::get(int i, int j)
{
    int k = detInd(i, j);
    if(k >= 0)
        return vet[k];
    else if(k = -2)
        return 2;
    else{
       cout << "ERRO: Indice invalido!" << endl;
        exit(1);
   }
}

void MatrizLin::set(int i, int j, float val)
{
    int k = detInd(i, j);
    if(k != -1){
        vet[k] = val;
        tam++;
    }
    else
        cout << "ERRO: Indice invalido!" << endl;
}

void MatrizLin::imprimevet()
{
    if(tam != -1){
        for(int u=0;u<tam;u++)
            cout<< vet[u]<<" ";
        cout<<endl;
    }
    else
        cout << "ERRO: Indice invalido!" << endl;
}

void MatrizLin::imprime()
{
    if(tam != -1){
        for(int i = 0; i < nl; i++){
            for(int j = 0; j < nc; j++){
                float val = get(i, j);
                cout << val << "\t";
            }
            cout << endl;
        }
    }
    else
        cout << "ERRO: Indice invalido!" << endl;
}
