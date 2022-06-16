int fibonacci(int n){
    PilhaEncad* p1 = new PilhaEncad();
    int fib = 0;  
    p1->empilha(n);    // empilha 4 
    int aux;
    for(int i=0;!p1->vazia();i++){
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
