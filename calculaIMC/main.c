#include <stdio.h>
float calculaIMC(float peso,float altura){
    float imc;
    altura = altura /100;
    imc = peso/(altura*altura);
    return imc;
}
int main()
{
    int alunos,i;
    float altura,peso,aux;
    scanf("%d",&alunos);
    for(i=0;i<alunos;i++){
        scanf("%f %f",&peso,&altura);
        aux =calculaIMC(peso,altura);
        if(aux >= 25)
            printf("Acima do peso\n");
        else 
            printf("peso ok\n");
    }
    return 0;
}
