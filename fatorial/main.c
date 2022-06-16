#include <stdio.h>
#include <stdlib.h>

long int func_fatorial(long int num){
    long int fat;
    for (fat = 1; num > 1; num = num - 1)
        fat = fat * num;
    return fat;
}



int main()
{
    long int num;
    scanf("%ld",&num);
    if(num >= 0)
        printf("Fatorial calculado:%ld",func_fatorial(num));
    else
        printf("Fatorial não pode ser calculado:%ld",-1*func_fatorial(num));
}