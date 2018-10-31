#ifndef CIRCULO_H
#define CIRCULO_H
#include "Figura_geom.h"

class Circulo : public Fig_geom{
private:
    int xc,yc,raio_circ;
    bool fill_mode;
public:
    Circulo(int _xc, int _yc,int _raio_circ, bool _fill_mode,char brush);
    void draw(Screen &tela);
};
