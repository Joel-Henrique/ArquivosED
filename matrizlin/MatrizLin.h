
#ifndef MatrizLin_H_INCLUDED
#define MatrizLin_H_INCLUDED

class MatrizLin
{
    private:
        int nl, nc; // numero de is e js
        int *vet; // vetor de tamanho nl*nc
        int detInd(int i, int j);
        int tam; //tam de vet
    public:
        MatrizLin(int mm,int nn);
        ~MatrizLin();
        void set(int i, int j, float val);
        float get(int i, int j);
        void imprime();      
        void imprimevet();
};

#endif // MatrizLin0_H_INCLUDED