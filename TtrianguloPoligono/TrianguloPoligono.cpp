//#include <iomanip>
#include <cassert>
#include <array>
#include <string>
//#include <iostream>

using namespace std;

int main(){
struct Punto {double x,y;}; //Tipo de dato Punto
//struct Color {String Rojo,Azul,Amarillo,Verde,Violeta;}; //Tipo de dato Color

//enum struct Color{Rojo,Azul,Amarillo,Verde,Violeta};
//assert(0 == static_cast(Color::Rojo));
//assert(1 == static_cast(Color::Azul));
//assert(2 == static_cast(Color::Amarillo));
//assert(3 == static_cast(Color::Verde));
//assert(4 == static_cast(Color::Violeta));

enum struct Color{Rojo=0,Azul=1,Amarillo=2,Verde=3,Violeta=4};
assert( 1 == static_cast<int>(Color::Azul) );
assert( 3 == static_cast<int>(Color::Verde) );

struct Triangulo {array<Punto,3> puntoTriangulo; }; //Color colorTriangulo;};
struct Poligono {array<Punto,10> puntoPoligono; Color colorPoligono;};

void SetTriangulo(Triangulo&,unsigned posicion, Punto);
//SetTriangulo(Isoseles.Triangulo,1, {1,4});

void SetPoligono(Poligono&,unsigned posicion, Punto);
//SetPentagono(Poligono1.Poligono,0, {3,0});

void GetTriangulo(const Triangulo&);
//GetTriangulo(Isoseles.Triangulo);

void GetPoligono(const Poligono&);
//GetPoligono(Poligono1.Poligono);

void CambiarColorTriangulo(Triangulo&,Color);
//CambiarColorTriangulo(Isoseles.Triangulo,3);

void CambiarColorPoligono(Poligono&,Color);
//CambiarColorPoligono(Poligono1.Poligono,4);

/*Triangulo t{ {{2,3},{5,4},{0,4}, 1}};
assert( 2 == t.at(0).x );
assert( 5 == t.at(1).x );
assert( t.at(1).y == t.at(2).y );
assert( 1 == t.colorTriangulo);
*/

//Poligono po{{ {1,1},{1,4},{2,5},{3,4},{3,1},{2,1},{4,4},{2,5},{5,2},{7,3} ,0}};
/*assert( 1 == po.at(0).x );
assert( 1 == po.at(1).x );
assert( po.at(1).y == po.at(3).y );
assert( 0 == po.at(0).colorPoligono);
*/
}