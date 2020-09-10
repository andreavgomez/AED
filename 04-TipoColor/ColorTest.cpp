/******************/
#include "Color.h"
/******************/
#include <cassert>

int main() {

 //GetHtmlHex(rojo);

 CrearSvgConTextoEscritoEnAltoContraste("Prueba.svg"
 ,"Hola Mundo", cyan);

 assert(IsIgual(rojo,rojo));     
 assert(IsIgual(verde,verde));     
 assert(IsIgual(azul,azul));     
 assert(IsIgual(magenta,magenta));     
 assert(not IsIgual(magenta,rojo)); 
 assert(not IsIgual(azul,rojo)); 
 assert(not IsIgual(verde,rojo)); 
 assert(not IsIgual(rojo,amarillo)); 

 //Mezclar(rojo,amarillo,300,250);
 //Mezclar(verde,cyan,50,50);

 //assert( (Mezclar(rojo,amarillo,300,250).R == amarillo.R) and (Mezclar(rojo,amarillo,300,250).G == amarillo.G) and (Mezclar(rojo,amarillo,300,250).B == amarillo.B));   
 assert( (Mezclar(cyan,azul,0,50).R == 0) and (Mezclar(cyan,azul,0,50).G == 0) and (Mezclar(cyan,azul,0,50).B == 63));   
 assert( (Mezclar(verde,cyan,50,50).R == 0) and (Mezclar(verde,cyan,50,50).G == 127) and (Mezclar(verde,cyan,50,50).B == 63));   
 
 assert( (Sumar(Sumar(rojo,verde),Sumar(verde,azul)).R == blanco.R) and (Sumar(Sumar(rojo,verde),Sumar(verde,azul)).G == blanco.G) and (Sumar(Sumar(rojo,verde),Sumar(verde,azul)).B == blanco.B) );
 assert( (Restar(Restar(rojo,verde),Restar(rojo,azul)).R == negro.R) and (Restar(Restar(rojo,verde),Restar(rojo,azul)).G == negro.G) and (Restar(Restar(rojo,verde),Restar(rojo,azul)).B == negro.B) );

 assert((GetComplementario(rojo).R == cyan.R) and (GetComplementario(rojo).G == cyan.G) and (GetComplementario(rojo).B == cyan.B));
 assert((GetComplementario(azul).R == amarillo.R) and (GetComplementario(azul).G == amarillo.G) and (GetComplementario(azul).B == amarillo.B));
 assert((GetComplementario(verde).R == magenta.R) and (GetComplementario(verde).G == magenta.G) and (GetComplementario(verde).B == magenta.B));
 assert((GetComplementario(blanco).R == negro.R) and (GetComplementario(blanco).G == negro.G) and (GetComplementario(blanco).B == negro.B));

 assert( "#0000ff" == GetHtmlHex(azul));
 assert( "#ff0000" == GetHtmlHex(rojo));
 assert( "#00ff00" == GetHtmlHex(verde));
 assert( "#ffff00" == GetHtmlHex(amarillo));
 assert( "#ff00ff" == GetHtmlHex(magenta));
 assert( "#00ffff" == GetHtmlHex(cyan));
 assert( "#ffffff" == GetHtmlHex(blanco));
 assert( "#000000" == GetHtmlHex(negro));

 assert( "rgb(0,0,255)" == GetHtmlRgb(azul));
 assert( "rgb(255,0,0)" == GetHtmlRgb(rojo));
 assert( "rgb(0,255,0)" == GetHtmlRgb(verde));
 assert( "rgb(255,255,0)" == GetHtmlRgb(amarillo));
 assert( "rgb(255,0,255)" == GetHtmlRgb(magenta));
 assert( "rgb(0,255,255)" == GetHtmlRgb(cyan));
 assert( "rgb(255,255,255)" == GetHtmlRgb(blanco));
 assert( "rgb(0,0,0)" == GetHtmlRgb(negro));

}