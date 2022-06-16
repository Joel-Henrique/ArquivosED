#include <iostream>
#include "jogador.h"

using namespace std;

jogador::jogador(int p, int m, int t){
   setPontuacao(p);
   setMelhorClassificacao(m);
   setTotalTitulos(t);
}
void jogador::setPontuacao(int p){ //(valor inteiro no intervalo fechado [0, 20000]);
    if(p>0 && p<20000)
        pontuacao = p;
    else{
        cout<<"Pontuacao invalida!"<<endl;
        exit(1);
    }
}
void jogador::setMelhorClassificacao(int m){ //valor inteiro positivo
    if(m>0)
        melhorClassificacao = m;
    else{
        cout<<"Classificacao invalida!" <<endl;
        exit(1);
    }
}

void jogador::setTotalTitulos(int t){ //valor inteiro positivo
    if(t>0)
        totalTitulos = t;
    else{
        cout<<"titulo invalido!" <<endl;
        exit(1);
    }
}
void jogador::posicaoRanking(int ranking[], int n, int *pos){
    int i = 0;
    for(i=0;i<n;i++){
        if(pontuacao > ranking[i]){
            break;
        }
    }
    *pos = i+1;
    cout << "Jogador eh o numero " << *pos << " do ranking" << endl;
    if(*pos > melhorClassificacao){
        cout << "Essa eh a melhor classificacao do jogador"<< endl;
        melhorClassificacao = *pos;
    }
    
}
