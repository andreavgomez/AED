#pragma once

#include <cassert>
#include <array>
#include <iostream>
#include <math.h>

/***********************/
/*
#include "Punto.h"
#include "Color.h"
#include "Poligono.h"
*/
/**********************/
using namespace std;

/* Tipos de datos */

struct Punto {double x,y;}; //Tipo de dato Punto

struct Color{ uint8_t R;
              uint8_t G;
              uint8_t B;
            };

struct Poligono {unsigned v; array<Punto,10> puntoPoligono; Color colorPoligono;}; // v --> cantidad de vertices
Poligono poligono1;

void AddVertice (Poligono&, Punto);
Punto GetVertice (const Poligono&, unsigned);        //unsigned es la posición del punto a obtener
void SetVertice (Poligono&, Punto, unsigned);  //unsigned es la posición del punto a cambiar
void RemoveVertice (Poligono&, unsigned);      //unsigned es la posición a eliminar
unsigned GetCantidadLados (const Poligono&); 
double GetDistancia(const Poligono&, int, int); // int es la posicion del array
double Get_GetPerimetro(const Poligono &poligono);