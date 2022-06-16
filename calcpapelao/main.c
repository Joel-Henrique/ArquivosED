#include <stdio.h>
void calcpapelao(char tipo,float larg,float compr){
    float peso,comparpeso;
    scanf("%f",&peso);
    if(tipo =='F'){
        comparpeso = larg * compr * 3;
        if(peso < comparpeso)
            printf("Caixa tipo %c com %.1f x %.1f suporta %.0fg.",tipo,larg,compr,peso);
        else
            printf("Caixa tipo %c com %.1f x %.1f nao suporta %.0fg.",tipo,larg,compr,peso);
        
    }
    else if(tipo == 'G'){
        comparpeso = larg * compr * 10;
        if(peso < comparpeso)
            printf("Caixa tipo %c com %.1f x %.1f suporta %.0fg.",tipo,larg,compr,peso);
        else
            printf("Caixa tipo %c com %.1f x %.1f nao suporta %.0fg.",tipo,larg,compr,peso);
    }
    else 
        printf("Tipo invalido");
    
    
}
int main()
{
    char tp;
    float larg,compr;
    scanf("%c %f %f",&tp,&larg,&compr);
    calcpapelao(tp,larg,compr);
    return 0;
}
