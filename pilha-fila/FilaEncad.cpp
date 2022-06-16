#include <iostream>
#include <cstdlib>
#include "FilaEncad.h"

using namespace std;

FilaEncad::FilaEncad(){
   // cout << "Criando FilaEncad" << endl;
    inicio = NULL;
    fim = NULL;
}

FilaEncad::~FilaEncad(){
    //cout << "Destruindo FilaEncad" << endl;
    No* p = inicio;
    while(inicio != NULL){
        inicio = p->getProx();
        delete p;
        p = inicio;
    }
    fim = NULL;
}

bool FilaEncad::vazia(){
    if(inicio == NULL)
        return true;
    else
        return false;
}

void FilaEncad::enfileira(int val){
    No* p = new No();
    p->setInfo(val);
    p->setProx(NULL);
    if(fim == NULL)
        inicio = p;
    else
        fim->setProx(p);
    fim = p;
}

int FilaEncad::getInicio(){
    if(inicio != NULL)
        return inicio->getInfo();
    else{
        cout << "Fila vazia!" << endl;
        exit(1);
    }
}

int FilaEncad::desenfileira()
{
    No* p;
    if(inicio != NULL){
        p = inicio;
        inicio = p->getProx();
        if(inicio == NULL)
            fim = NULL;
        int val = p->getInfo();
        delete p;
        return val;
    }else{
        cout << "ERRO: Fila Vazia!" << endl;
        exit(1);
    }
}
void FilaEncad::imprime(){
    if(inicio == NULL){
        cout << "ERRO: lista vazia" << endl;
        exit(1);
    }

    No *p = inicio;

    while(p != NULL){
        cout << p->getInfo() << " ";
        p = p ->getProx();
    }
    cout << endl;
}

FilaEncad* FilaEncad::reorganiza(FilaEncad *f){ //reorganiza colocando valores menores q 70 na nova lista,sem utilizar outra estrutura
    FilaEncad *novo = new FilaEncad();
    int p;
    p = f->desenfileira();
    f->enfileira(p);
    
    if(p < 70)
        novo->enfileira(p);
        
    while(p != f->getInicio()){
        if(f->getInicio() < 70){
            novo->enfileira(f->getInicio());
            f->desenfileira();
        }
        else{
            f->enfileira(f->getInicio());
            f->desenfileira();
        }
    }
    
    if(p < 70)
       f->desenfileira();
       
    return novo;
}

FilaEncad* reorganiza2(FilaEncad *f){ //reorganiza colocando na nova lista valores maiores q 70 q sucedem valores > 70
    FilaEncad *nova = new FilaEncad();
    int p, ant, val;

    p = f->desenfileira();
    ant = p;
    f->enfileira(p);

    while(p != f->getInicio()){
        val = f->desenfileira();

        if(ant > 70 && val > 70){
            nova->enfileira(val);
        } else {
            f->enfileira(val);
        }

        ant = val;
    }

    return nova;
}


