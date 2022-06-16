
/* O n ́umero de d ́ıgitos de um n ́umero inteiro positivo pode ser determinado atrav ́es de sucessivas
divis ̃oes por 10 (sem guardar o resto) at ́e que o n ́umero seja menor do que 10, consistindo
de apenas 1 d ́ıgito. Implemente uma fun ̧c ̃ao recursiva que calcule o n ́umero de d ́ıgitos de um
inteiro positivo n.*/

using namespace std;
#include <iostream>


int auxdigitos(int x,int n){
    if(x < 10)
        return 1;
    else
        return n + auxdigitos(x/10 ,n);
}
int digitos(int x)
{
    int n=1;
    return auxdigitos(x,n);
}





int main()
{
    int x;
    std::cout << "digite um numero: " ;
    cin>> x;
    cout<<"O numero "<< x << " tem  "<<digitos(x)<<" digitos";
    return 0;
}
