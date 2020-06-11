/* Funciones
Andrea Gomez
01/06/2020
*/
//#include <iostream>
#include <cassert> 

double Beta(double);

int main() {
 //double a;
 //std::cout << "ingrese un valor \n";
 //std::cin >> a;
 //std::cout << "El Valor de la funcion es:" << Beta(a) <<"\n";
 assert(  3.0 == Beta(-3.0) );  
 assert(  0.0 == Beta(0.0) );
 assert( -3.0 == Beta(3.0) );
 assert(  4.0 == Beta(4.0) );
 assert( -4.0 == Beta(-4.0));  
}

double Beta(double x){return ((-3.0 <= x) and (3.0 >= x)) ? -x : x;}
