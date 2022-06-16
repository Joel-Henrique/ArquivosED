#include <stdio.h>
void Calccasquinha(){
    int bau=0,choc=0,mist=0,aux=0;
    for(;aux != -999;){
       scanf("%d",&aux);
        if(aux == 100)
            bau++;
        else if(aux == 102)
            choc++;
        else if(aux == 103)
            mist++;
    }
    printf("Baunilha: %d\nchocolate: %d\nmista: %d\n",bau,choc,mist);
}
int main()
{
    Calccasquinha();
    return 0;
}
