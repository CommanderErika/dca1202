#ifndef FIGURA_GEOMETRICA_H
#define FIGURA_GEOMETRICA_H
#include "screen.h"//tela da primeira parte do projeto

class Fig_geom{
  protected:
    char brush;
  public:
    
    Fig_geom(){};
    virtual void draw(Screen &tela)=0;
    inline void set_brush(char _brush){brush = _brush;}
    inline char get_brush(){return brush;}

};
