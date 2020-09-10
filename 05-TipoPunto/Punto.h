#pragma once

#include <cassert>
#include <math.h>

//using namespace std;

/* Tipos de datos */

struct Punto {double x,y;}; //Tipo de dato Punto

/* Prototipo de las funciones(operaciones) */
bool IsIgual(const Punto&,const Punto&);
double GetDistancia(const Punto&, const Punto&);
double GetDistanciaAlOrigen(const Punto&); 
void Mover (Punto&, double, double);
