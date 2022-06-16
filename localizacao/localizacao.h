#ifndef localizacao_H_INCLUDED
#define localizacao_H_INCLUDED
class localizacao{
   private:
       int latitude , longitude;
      
   public:
        localizacao(int lt,int lg);
        float getLatitude(); 
        float getLongitude(); 
        void setLatitude(float lat); 
        void setLongitude(float lng);
        bool contidaNoIntervalo(Localizacao min, Localizacao max); 
};
#endif