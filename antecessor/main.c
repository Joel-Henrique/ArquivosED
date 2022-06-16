int ArvBinBusca::noMaisEsquerda()
{
	NoArv* p = raiz;
	while (p->getEsq() != NULL)
		p = p->getEsq();
	return p->getInfo();
}

int ArvBinBusca::noMaisDireita()
{
	NoArv* p = raiz;
	while (p->getDir() != NULL)
		p = p->getDir();
	return p->getInfo();
}


int ArvBinBusca::antecessor(int val){
    if(raiz!= NULL)
        return auxantecessor(raiz,val);
    else
        return -1;
}
int ArvBinBusca::auxantecessor(int val){
    while (p != NULL){
    	if (p->getInfo() == val) {      // achou val na Arvore  
		    if (p->getEsq() != NULL){   //verifica se existe valor a esq de val 
                return p->getEsq();
			}
		    else if (p->getDir() != NULL){ //verifica se existe valor a dir de val 
                return p->getDir();
			}   
			else        //se n tem anterior ele retorna -1 
			    return -1;
			    
    	}else if (val < p->getInfo()) 
			p = p->getEsq();
		else if (val > p->getInfo()){
			p = p->getDir();
			if (val < noMaisEsquerda() || val > noMaisDireita()){ // se não achou val ele n ta na arvore
				return -1;
				break;
			}
		}
    }
}