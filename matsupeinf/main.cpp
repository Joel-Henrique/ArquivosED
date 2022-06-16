#include <iostream>
#include "matriztriinf.h"
#include "MatrizTriangSup.h"

using namespace std;

int main()
{
    MatrizTriangSup mat(5);

    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++)
            mat.set(i,j,i+j+10);


    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
            cout<<"\t"<<mat.get(i,j);
        cout<<endl;
    }
    MatrizTriInf mat1(5);

    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++)
            mat1.set(i,j,i+j+10);


    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
            cout<<"\t"<<mat1.get(i,j);
        cout<<endl;
    }

    return 0;
}
