#include <iostream>
#include "MatrizLin.h"

using namespace std;

int main()
{
    int m = 6, n = 6;
    MatrizLin mat(m, n);
    mat.imprime(); 
    cout<<endl;
    mat.imprimevet();
 
}