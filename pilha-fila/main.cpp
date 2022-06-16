#include <iostream>
#include "PilhaEncad.h"
#include "FilaEncad.h"

using namespace std;

bool verifica(char* vet, int n){ //exercicio 1
    PilhaEncad* p1 = new PilhaEncad();
    PilhaEncad* p2 = new PilhaEncad();
    for(int i=0;i < n;i++){
        if(vet[i] == 'a')
            p1 -> empilha(vet[i]);
        else if(vet[i] == 'b')
            p2 -> empilha(vet[i]);
        else{
            p1 -> desempilha();
            p2 -> desempilha();
        }
    }
    
    if(p1->vazia() && p2->vazia())
        return true;
    else
        return false;
}
int fibonacci(int n){
    PilhaEncad* p1 = new PilhaEncad();
    int fib = 0;  
    p1->empilha(n);    // empilha 4 
    int aux;
    for(;!p1->vazia();){
        if(p1->getTopo() == 1){  //soma fib se topo for 1 e desempilha topo
            p1->desempilha();
            fib++; 
        }
        else if(p1->getTopo() == 0) // apenas desempilha se topo for 0
            p1->desempilha(); 
        else{
            aux = p1->getTopo();  // faz auxiliar ser o atual topo que no primeiro caso é 4
            p1->desempilha(); //desempilha topo
            p1->empilha(aux-1);  //empilha aux - i que no primeiro caso é  4-1 = 3
            p1->empilha(aux-2); //empilha aux - i -1 que no primeiro caso é  4-2 = 2
        }
    }
    delete p1; //deleta a pilha 
    return fib; //retorna o fib
}

int main(){
    
    /// TESTE COM PILHA
   // PilhaEncad p;

    //for(int i = 0; i < 5; i++) p.empilha(i);
    
   // p.imprime();
/*
    for(int i = 9; i < 14; i++) p.empilha(i);
    cout << "Pilha apos inserir mais 5 valores" << endl;
    p.imprime();

    /// TESTE COM FILA

    FilaEncad f;
    for(int i=0; i<5; i++) f.enfileira(i);
    cout << "Fila apos inserir 5 valores" << endl;
    f.imprime();

    for(int i = 9; i < 14; i++) f.enfileira(i);
    cout << "Fila apos inserir mais 5 valores" << endl;
    f.imprime();
    */
    
    //exercicio 1
    //cout << verifica("aaaabbbbcccc,",12)<< endl;
    
    /*exercicio 2 
    FilaEncad f;
    for(int i=65; i<75; i++) f.enfileira(i);
    cout<<"Lista: ";f.imprime();    
    f.reorganiza(&f);
    cout<<"Lista apos reorganizar menor: ";f.imprime();
    */
    cout<<fibonacci(4);
    
}