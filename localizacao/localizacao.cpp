#include <iostream>
#include "jogador.h"

using namespace std;

localizacao::localizacao(int la, int lo){
   setLatitude(la);
   setLongitude(lo);
}
void localizacao::setLatitude(float lat){ //valor real no intervalo fechado [-90, 90]
    if(lat>-90 && lat<90)
        latitude = lat;
    else{
        cout<<"latitude invalida!"<<endl;
        exit(1);
    }
}
void localizacao::setLongitude(float lng){ //valor real no intervalo fechado [-180, 180]
    if(lo>-180 && lo<180)
        longitude = lo;
    else{
        cout<<"latitude invalida!"<<endl;
        exit(1);
    }
}
float localizacao::getLatitude(){
    return latitude;
}
float localizacao::getLongitude(){
    return longitude;
} 
bool contidaNoIntervalo(Localizacao min, Localizacao max){
   if(latitude >= min.latitude && latitude <= max.latitude && longitude >= min.longitude && longitude <= max.longitude)
       return true;
   else
       return false;
}
