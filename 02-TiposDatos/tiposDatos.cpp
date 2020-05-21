/* Tipos de Datos
Andrea Gomez
17/05/2020
*/

#include <iostream>
#include <cassert> //Para usar la funcion assert() 
#include <string>  //Para usar cadenas -> string

int main() {
 int a,b,c;
 a = 10;
 b = 2;
 std::cout << "################## \n";
 std::cout << "Tipo de Dato int: Enteros positivos y negativos. Si operamos dos enteros por ej. "; //||a||"/"||b||"\n";
 std::cout << a << "/" << b;
 assert( b != 0 );  // Se agrega una aserción    
 c = a / b;
 std::cout << " Resultado: " << c << std::endl;

 bool isBool =true,
      isBool2=false;
 std::cout << "################## \n";
 std::cout << "Tipo de Dato bool: True o False. Por ej.  isBool != isBool2 \n";    
 assert (isBool != isBool2);
 std::cout << "En este ejemplo devuelve true \n";


 unsigned d,e,f;
 d=8000;
 e=50;
 std::cout << "################## \n";
 std::cout << "Tipo de Dato unsigned: Numeros naturales (con valores de 0 a 429496967295). Si operamos dos unsigned por ej. "; 
 std::cout << d << "*" << e;
 
 //assert( e >= 0 and e <= 255);  // Se agrega una aserción    
 assert( (e >= 0 and e <= 429496967295 ) and (d >=0 and d <= 429496967295) and (f >=0 and f <= 429496967295) );  // Se agrega una aserción   
 f = d * e;
 std::cout << " Resultado: " << f << std::endl;

 char valor1,valor2;
 valor1='H';
 valor2='H';
 std::cout << "################## \n";
 std::cout << "Tipo de Dato char: Guarda el codigo que represeta el caracteres que estamos guardando. Si operamos dos char por ej. "; //||a||"||"||b||"\n";
 std::cout << valor1 << "==" << valor2;
 std::cout << " Resultado: Los valores son iguales" << std::endl;
 
 double vdouble,vdouble2;
 vdouble=10.5;
 vdouble2=2.8;
 std::cout << "################## \n";
 std::cout << "Tipo de Dato double: son Reales. Si operamos dos double por ej. "; //||a||"+"||b||"\n";
 std::cout << vdouble << "+" << vdouble2;
 std::cout << " Resultado: " << vdouble + vdouble2 << std::endl;

 std::string cadena1 = ("Hola"),
             cadena2 = ("Chau");
 std::cout << "################## \n";
 std::cout << "Tipo de Dato string: Guarda una cadena. Si operamos dos string por ej. " << "\n";
 std::cout << "cadena1: " << cadena1 << " cadena1 .Length(): " << cadena1 .length() << " bytes.\n";
 std::cout << "cadena2: " << cadena2 << " cadena2 .Length(): " << cadena2 .length() << " bytes.\n";
 std::cout << cadena1 .length() << "==" << cadena2 .length();
 std::cout << " Resultado: Los valores son iguales" << std::endl;  

}