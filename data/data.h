#ifndef data_H_INCLUDED
#define data_H_INCLUDED
class data
{
   private:
        int dia,mes,ano;
      
   public:
       data(int d, int m, int a);
       void setDiaMesAno(int d, int m, int a);
       void imprime();
       data* somaanos(int nanos);
};

#endif