/*Implemente uma func ̧ao que calcule o produto escalar  ̃
entre dois vetores do tipo de dados float. No programa
principal voce deve ler o tamanho ˆ n dos vetores, os quais
devem ser alocados dinamicamente usando new. Depois,
voce deve ler os dados dos vetores e chamar a func ̧ ˆ ao para  ̃
calcular o produto escalar. Por fim, use o operador
delete para desalocar toda memoria alocada de forma  ́
dinamica. Prot ˆ otipo:  ́
float prodEscalar(int n, float x[], float y[]);*/

#include <iostream>
using namespace std;

float prodEscalar(int n, float *vet, float *vet2){
    float soma=0;
    for(int i =0;i<n;i++){
        soma = soma + *(vet+i) * *(vet2+i);
    }
    
    return soma;
    
}


int main()
{
    float *vet,*vet2;
    int n;
    cout << "digite o tamanho dos vetores" <<endl;
    cin >> n;
    
    vet = new float[n];
    vet2 = new float[n];
    
    for(int i=0;i < n;i++){
        cout << "digite o " << i+1 << " do primeiro vetor"<<endl;
        cin >> *(vet+i);
    }
    for(int i=0;i < n;i++){
        cout << "digite o " << i+1 << " do segundo vetor"<<endl;
        cin >> *(vet2+i);
    }
    cout << "O prodEscalar dos dois vetores e : " << prodEscalar(n,vet,vet2)<<endl; 
    
    
    delete [] vet;
    delete [] vet2;
    
}
