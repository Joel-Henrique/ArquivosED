#include <iostream>
#include "data.h"

using namespace std;
       // int dia,mes,ano;
      
    data::data(int d, int m, int a){
        
        setDiaMesAno(d,m,a);
        
    }
    void data::setDiaMesAno(int d, int m, int a){
        dia = 1;
        if(d>1 && d < 30)
            dia = d;
        mes = 1;
        if(m> 0 && m <12)
            mes= m;
        ano = 1000;
        if(a >0)
            ano = a;
    }
    void data::imprime(){
        //cout<<"numero de dias: "<<dia<<"numero de meses: "<<mes<<"numero de anos: "<<ano<<endl;
        if(dia<10)
            cout<<"0"<<dia<<"/";
        else
            cout<<dia<<"/";
        if(mes<10)
            cout<<"0"<<mes<<"/";
        else
            cout<<mes<<"/";
        cout<<ano;
    }
    data* data::somaanos(int nanos){
        data *aux = new data(dia,mes,ano + nanos);
        return aux;
    }