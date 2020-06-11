/* Funciones
Andrea Gomez
09/06/2020
*/
#include <cassert> 

bool IsBisiesto(unsigned);

int main() {

 assert(IsBisiesto(1584));     // prueba Primer año bisiesto
 assert(IsBisiesto(1600));     // Prueba con año bisiesto, divisible por 400 
 assert(IsBisiesto(2000));     // Prueba con año bisiesto, divisible por 400 y 100
 assert(IsBisiesto(2016));     // prueba año bisiesto
 assert(not IsBisiesto(1582));     // prueba año en que se empiezan a considerar los años bisiesto
 assert(not IsBisiesto(1700));  // Prueba con año no bisiesto, no divisibles por 400
 assert(not IsBisiesto(700));  // Prueba con año no bisiesto, menor que 1582
 assert(not IsBisiesto(1900)); // prueba con divisible solo por 100 
}

bool IsBisiesto(unsigned anio)
{
  return anio > 1582 and (anio%4 == 0) and ((anio%100 != 0) or anio%400 == 0) ? true : false;  

  // fórmula lógica    m ^ (p ^ (-q v r))

}
