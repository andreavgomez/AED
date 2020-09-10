/******************/
#include "Punto.h"
/******************/
#include <cassert>

int main()
{
assert (IsIgual({1,2},{1,2})); 
assert (IsIgual({2,4},{2,4})); 

assert (GetDistancia({2,2},{1,1})==1);
assert (GetDistancia({4,4},{2,2})==2);    

assert (GetDistanciaAlOrigen({2,2})==4);
assert (GetDistanciaAlOrigen({1,1})==1);

}