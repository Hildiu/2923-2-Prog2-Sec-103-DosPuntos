//
// Created by mbermejo on 16/10/2023.
//

#ifndef EJEM_CPUNTO_CPUNTO_H
#define EJEM_CPUNTO_CPUNTO_H

#include <iostream>
#include <cmath>
using namespace std;

using tnumero = double;

class CPunto
{
  private:
    tnumero x;
    tnumero y;
  public:
    CPunto(){}
    CPunto(tnumero _x, tnumero _y): x(_x), y(_y) {}
    virtual ~CPunto() { cout << "Me estoy destruyendo...";}
    //-----metodos----
    void setX(tnumero _x) { x = _x;}
    tnumero getX(){ return x;}
    void setY(tnumero _y) { y = _y;}
    tnumero getY(){ return y;}

    tnumero distancia(CPunto & otroPunto);
};


#endif //EJEM_CPUNTO_CPUNTO_H
