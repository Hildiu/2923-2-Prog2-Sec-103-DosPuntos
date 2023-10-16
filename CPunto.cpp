//
// Created by mbermejo on 16/10/2023.
//

#include "CPunto.h"


tnumero  CPunto::distancia(CPunto & otroPunto)
{
  return sqrt( pow((otroPunto.x - x),2 ) + pow( (otroPunto.y - y),2));
}