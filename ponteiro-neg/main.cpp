

/* */


#include <iostream>
using namespace std;

bool func(int tam,int *vet,int *par,int *impar, int *negativos){
    
    for(int i =0;i<tam;i++){
        if(*(vet+i) % 2 == 0){
            (*par)++;
        }else{
            (*impar)++;
        }
        if(*(vet+i) < 0){
            (*negativos)++;
        }
   }
    if ((*negativos) > 0){
        return true;
    }
    return false;
}




int main()
{
    int tam,par=0,impar=0,negativos=0;
    int *vet;
    cin >> tam;
    
    vet = new int[tam];
    
    for(int i=0;i < tam;i++){
        cin >> *(vet+i);
    }
    
    if(func(tam,vet,&par,&impar,&negativos)) 
        cout << "Possui " << negativos << " elementos negativos" << endl;
    else
        cout << "Nao possui elementos negativos"<< endl;

    cout << "Possui " << par << " elementos pares"<< endl;
    cout << "Possui " << impar << " elementos impares"<< endl;
    
    delete [] vet;
}
