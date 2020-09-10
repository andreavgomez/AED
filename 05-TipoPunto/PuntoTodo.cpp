#include <cassert>
//#include <array>
//#include <string>
//#include <iostream>
#include <math.h>

//using namespace std;

/* Tipos de datos */

struct Punto {double x,y;}; //Tipo de dato Punto

Punto p1 {1,2};

/* Prototipo de las funciones(operaciones) */
bool IsIgual(const Punto&,const Punto&);
double GetDistancia(const Punto&, const Punto&);
double GetDistanciaAlOrigen(const Punto&); 
void Mover (Punto&, double, double);

int main()
{
assert (IsIgual({1,2},{1,2})); 
assert (IsIgual({2,4},{2,4})); 

assert (GetDistancia({2,2},{1,1})==1);
assert (GetDistancia({4,4},{2,2})==2);    

assert (GetDistanciaAlOrigen({2,2})==4);
assert (GetDistanciaAlOrigen({1,1})==1);

 Mover(p1, 2.0 ,1.0);

}

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
p.x = p.x + cantidadX;
p.y = p.y + cantidadY;
}
