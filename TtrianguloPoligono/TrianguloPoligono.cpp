#include <cassert>
#include <array>
#include <string>
#include <iostream>
#include <math.h>

using namespace std;

/* Tipos de datos */

struct Punto {double x,y;}; //Tipo de dato Punto
enum struct Color{Rojo=0,Azul=1,Amarillo=2,Verde=3,Violeta=4};
struct Triangulo {array<Punto,3> puntoTriangulo; Color colorTriangulo;};
struct Poligono {array<Punto,10> puntoPoligono; Color colorPoligono;};

/* Prototipos de funciones para el Triangulo */ 
void SetPosTriangulo(Triangulo&,unsigned, const Punto&);  // unsigned posicion del array a cambiar
Punto GetPtoTriangulo(const Triangulo&, unsigned);       // unsigned posicion del array
void CambiarColorTriangulo(Triangulo& t, Color);
string GetClasificarTriangulo(const Triangulo&);
double GetDistanciaEntreDosPtos(const Punto& , const Punto&);

/* Prototipos de funciones para el Poligono */ 
void SetPosPoligono(Poligono&,unsigned, const Punto&); // unsigned posicion del array a cambiar
Punto GetPtoPoligono(const Poligono&, unsigned);        // unsigned posicion del array
void CambiarColorPoligono(Poligono&, Color);     

int main(){    
/* Declaro Triangulo */    
 Triangulo t{ {{{2,3},{5,4},{0,4}}}, Color::Azul};
 /*
 assert( 2 == t.at(0).x );
 assert( 5 == t.at(1).x );
 assert( t.at(1).y == t.at(2).y );
 assert( Color::Azul == t.colorTriangulo);
 */

 SetPosTriangulo(t,1,{1,4});
 CambiarColorTriangulo(t, Color::Verde);
 Punto p ;
 p = GetPtoTriangulo(t, 0); 
 string clasifTriangulo;
 clasifTriangulo = GetClasificarTriangulo(t);
 
 /* Muestro en pantalla la clasificacion del triangulo */
 cout << "Clasificacion del Triangulo:" <<clasifTriangulo;
 /* Recorro el array Triangulo y lo muestro por pantalla */
 for (int i = 0; i < t.puntoTriangulo.size(); i++)
    {
     cout << "(" << t.puntoTriangulo[i].x << ", " << t.puntoTriangulo[i].y << ")";
    }

/* Declaro Poligono */
 Poligono po{ {{{1,1},{1,4},{2,5},{3,4},{3,1},{2,1},{4,4},{2,5},{5,2},{7,3}}} , Color::Rojo};
 /*
 assert( 1 == po.at(0).x );
 assert( 1 == po.at(1).x );
 assert( po.at(1).y == po.at(3).y );
 assert( Color::Rojo == po.colorPoligono);
*/

 SetPosPoligono(po,5,{1,4});
 CambiarColorPoligono(po, Color::Violeta);
 Punto pto;
 pto = GetPtoPoligono(po, 2);

}

/* Funciones del Triangulo */
void SetPosTriangulo(Triangulo& t,unsigned posicion, const Punto& puntoNuevo)
{
    t.puntoTriangulo[posicion] = puntoNuevo;            
}

void CambiarColorTriangulo(Triangulo& t,Color colorTriangulo)
{
    t.colorTriangulo = colorTriangulo;
}

Punto GetPtoTriangulo(const Triangulo& t, unsigned posicion)
{
    return t.puntoTriangulo.at(posicion);
}

 string GetClasificarTriangulo(const Triangulo& t)
{
  double lado1,lado2,lado3;
  lado1 = GetDistanciaEntreDosPtos(t.puntoTriangulo.at(0), t.puntoTriangulo.at(1));
  lado2 = GetDistanciaEntreDosPtos(t.puntoTriangulo.at(1), t.puntoTriangulo.at(2));
  lado3 = GetDistanciaEntreDosPtos(t.puntoTriangulo.at(2), t.puntoTriangulo.at(0));

   return   (lado1 == lado2) and (lado2 == lado3) ? "Equilatero" :
            ((lado1 == lado2) and (lado2 != lado3)) or ((lado1 != lado2) and (lado2 == lado3)) or ((lado1 == lado3) and (lado3 != lado2))? "Isoseles" :             
            "Escaleno";
}

double GetDistanciaEntreDosPtos(const Punto& punto1, const Punto& punto2)
{
  return sqrt(pow((punto2.x-punto1.x),2) + pow((punto2.y-punto1.y),2));
}

/* Funciones del Poligono */
void SetPosPoligono(Poligono& po,unsigned posicion, const Punto& puntoNuevo)
{
    po.puntoPoligono[posicion] = puntoNuevo;            
}

void CambiarColorPoligono(Poligono& po, Color colorPoligono)
{
    po.colorPoligono = colorPoligono;
}

Punto GetPtoPoligono(const Poligono& po, unsigned posicion)
{
    return po.puntoPoligono.at(posicion);
}
