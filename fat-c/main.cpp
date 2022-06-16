#include <iostream>

using namespace std;

int fat(int n){
    if(n<0){
        return fat(-n);
    }
    else{
        if(n == 1){
            return 1;
        }else{
           return n*fat(n - 1);
        }
    }
}


/*int fat(int n){
    int fato = 1;
    for(int i=1;i<=n;i++){
        fato = fato * i;
    }   
    return fato;

}
*/


int main(){
    int n;
    cin >> n;
    cout << "fatotial de "<< n <<" = "<< fat(n) << endl;
    return 0;
}