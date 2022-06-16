#include <iostream>
#include "MatrizLin.h"

using namespace std;

int main()
{
    int m = 6, n = 6;
    MatrizLin mat(m, n);

    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
        {
            if((j>=3 && i<3) || (i>=3 && j<3)){    //||
                float val = 0; 
                mat.set(i, j, val);
            }
            else{
                float val = 1; 
                mat.set(i, j, val);
            }
        }
    
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            float val = mat.get(i, j);
            cout << val << "\t";
        }
        cout << endl;
    }

    //mat.imprime();
    //mat.imprimevet();
    return 0;
}