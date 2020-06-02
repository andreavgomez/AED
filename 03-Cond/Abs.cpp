/* Funciones
Andrea Gomez
01/06/2020
*/
//#include <iostream>
#include <cassert> 

int Abs(int);

int main() {
 int a;
 //std::cout << "ingrese un valor \n";
 //std::cin >> a;
 //std::cout << "El Valor absoluto es:" << Abs(a) <<"\n";

 assert( 7 == Abs(-7) );  
 assert( 0 == Abs(0) );
 assert( 7 == Abs(7) );  
}

int Abs(int x){return x < 0 ? -x : x ;}
