/* Funciones
Andrea Gomez
01/06/2020
*/
//#include <iostream>
#include <cassert> 

int ValorMinimo(int,int);

int main() {
 //int a,b;
 //std::cout << "ingrese un valor \n";
 //std::cin >> a;
 //std::cout << "ingrese otro valor \n";
 //std::cin >> b;
 //std::cout << "El menor es:" << ValorMinimo(a,b) <<"\n";
 assert( 7 <= ValorMinimo(7,8) );  // Se agrega una aserción    
}

int ValorMinimo(int x, int y){return x <= y ? x : y ;}
