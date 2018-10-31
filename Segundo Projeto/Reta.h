#ifndef RETA_H
#define RETA_H
#include "fig_geom.h"

class Reta : public Fig_geom{

private:
    int xi,yi,xf,yf;
public:
    Reta(int _xi,int _yi,int _xf,int _yf,char _brush);
	void draw(Screen &t); //desenha a figura na tela
};

int Sinal(int n);

