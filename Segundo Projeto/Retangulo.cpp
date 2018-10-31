#include "Retangulo.h"
#include "Reta.h"
#include <iostream>
using namespace std;

Retangulo::Retangulo(int _xi,int _yi,int _alt, int _larg,bool _fill_mode,char _brush){
  xi =_xi;
  yi =_yi;
  alt =_alt;
  larg =_larg;
  fill_mode =_fill_mode;
  brush =_brush;
}
void setpixel(Screen &tela, int &xi, int &yi, int &alt, int &larg, char &brush){
  Reta_debaixo (xi,yi,xi+larg,yi,brush);
  Reta_direita(xi+larg,yi,xi+larg,yi+alt,brush);
  Reta_decima(xi+larg,yi+alt,xi,yi+alt,brush);
  Reta_esquerda(xi,yi+alt,xi,yi,brush);
  debaixo.draw(tela);
  direira.draw(tela);
  decima.draw(tela);
  esquerda.draw(tela);
}
