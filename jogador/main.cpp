#include <iostream>
#include "jogador.h"

using namespace std;

int main(){
    int pos;
    int ranking[] = {8500, 6643, 3444, 1201, 1102, 1085, 998, 853, 554,
    323};
    jogador jj(5000, 3, 15);
    jj.posicaoRanking(ranking, 10, &pos);
}