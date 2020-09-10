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

int main ()
{
 
double dist = GetDistancia(poligono1, 1, 2);
//cout << "distancia:"<< dist;
assert (GetDistancia(poligono1,1,2)==0);

}

   void AddVertice (Poligono &poligono, Punto punto)
   {
       poligono.v += 1;
       poligono.puntoPoligono.at (poligono.v)  = punto;
   }

    Punto GetVertice (const Poligono &poligono, unsigned posicion)
    {
        return poligono.puntoPoligono.at (posicion);        
    }
   
    void SetVertice (Poligono &poligono, Punto punto, unsigned posicion)
    {
        poligono.puntoPoligono.at (posicion) = punto;
    }

    void RemoveVertice (Poligono &poligono)
    {
        //poligono.v = poligono.v - 1;
        poligono.v -= 1;        
    }

    unsigned GetCantidadLados (Poligono &poligono)
    {
        return poligono.v;
    }

    double GetDistancia(const Poligono &poligono, int i, int j)
    {
  	   return sqrt(pow(poligono.puntoPoligono[i].x - poligono.puntoPoligono[j].x,2.0) + pow(poligono.puntoPoligono[i].y - poligono.puntoPoligono[j].y,2.0));
    }
    
    double Get_GetPerimetro(const Poligono &poligono) 
    {
	 double valor = 0;
	  for (int i = 0; i < (poligono.v - 1); ++i)
         {
	       valor = valor + sqrt(pow(poligono.puntoPoligono[i].x - poligono.puntoPoligono[i+1].x,2.0) + pow(poligono.puntoPoligono[i].y - poligono.puntoPoligono[i+1].y,2.0));
	     }
	  valor = valor + sqrt(pow(poligono.puntoPoligono[poligono.v-1].x - poligono.puntoPoligono[0].x,2.0) + pow(poligono.puntoPoligono[poligono.v-1].y - poligono.puntoPoligono[0].y,2.0));
	 return valor;
     }
    