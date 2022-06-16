#ifndef jogador_H_INCLUDED
#define jogador_H_INCLUDED
class jogador{
   private:
       int pontuacao, melhorClassificacao, totalTitulos;
      
   public:
        jogador(int p, int m, int t);
        void setPontuacao(int p);
        void setMelhorClassificacao(int m);
        void setTotalTitulos(int t);
        void posicaoRanking(int ranking[], int n, int *pos);
};
#endif