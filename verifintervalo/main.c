
#include <stdio.h>
void verifintervalo(int x){
    int i;
    if(x%2==0){
        x=x-1;
        for(i=0;i<=x;i++){
            if(i%2 != 0)
                printf("%d\n",i);
        }
    }
    else if(x > 0){
        for(i=0;i<=x;i++){
            if(i%2 != 0)
                printf("%d\n",i);
        }
    }
    else
        printf("valor informado fora do intervalo ");
}
int main()
{
    int x;
    scanf("%d",&x);
    verifintervalo(x);
    return 0;
}
