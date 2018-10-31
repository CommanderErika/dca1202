#ifndef RETANGULO_H
#define RETANGULO_H
#include "Fig_geom.h"
class Retangulo: public Fig_geom{
private:
  int xi,yi,alt,larg;
  bool fill_mode;
public:
   Retangulo(int _xi = 0, int _yi =0 , int _alt =0,int _larg =0 ,bool fill_mode = 0,char brush = 'X');
   void draw(Screen &tela);
};
void setpixel(Screen &tela, int &xi, int &yi, int &alt, int &larg, char &brush);