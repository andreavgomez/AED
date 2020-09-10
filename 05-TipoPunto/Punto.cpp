/******************/
#include "Punto.h"
/******************/
#include <cassert>
#include <math.h>


bool IsIgual(const Punto& p1,const Punto& p2)
{
  return (p1.x==p2.x) and (p1.y==p2.y);
}    

double GetDistancia(const Punto& punto1, const Punto& punto2)
{
  return sqrt(pow((punto2.x-punto1.x),2) + pow((punto2.y-punto1.y),2));
}

double GetDistanciaAlOrigen(const Punto& p) {
  return sqrt(pow(p.x,2) + pow(p.y,2));
}

void Mover (Punto& p, double cantidadX, double cantidadY)
{
p.x += cantidadX;
p.y += cantidadY;
}
