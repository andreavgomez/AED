#include <cassert>
#include <string>
#include <cstdint>
#include <iostream>
#include <fstream>
#include <algorithm>
//#include <math.h>

//using std::string;
using namespace std;

/* Tipos de datos */
struct Color{ uint8_t R;
              uint8_t G;
              uint8_t B;
            };

const Color rojo {255,0,0};
const Color verde {0,255,0};
const Color azul {0,0,255};
const Color amarillo {255,255,0};
const Color magenta {255,0,255};
const Color cyan {0,255,255};
//const Color blanco {255,255,255};
//const Color negro {0,0,0};

// Prototipos de las Funciones(Operaciones) 
bool   IsIgual(Color,Color);  //Pasaje de argumentos por valor para tener un ejemplo
Color  Mezclar(Color,Color,uint8_t,uint8_t);  //Pasaje de argumentos por valor para tener un ejemplo
Color  Sumar(Color,Color);
Color  Restar(Color,Color);
Color  GetComplementario(Color);
string GetHtmlHex(Color);
string Hex(int);
string GetHtmlRgb(Color);
void CrearSvgConTextoEscritoEnAltoContraste(string,string,Color);

const Color blanco = Sumar( Sumar(rojo,verde), Sumar(verde,azul));
const Color negro  = Restar(rojo,rojo) ;

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

bool IsIgual(Color color1,Color color2)
{
  return (color1.R == color2.R) and (color1.G ==color2.G) and (color1.B == color2.B);  
}

Color Mezclar(Color color1,Color color2,uint8_t intColor1,uint8_t intColor2)
{
  //return Sumar(color1,color2);

  intColor1 = intColor1 > 255 ? 255 : intColor1;
  intColor2 = intColor2 > 255 ? 255 : intColor2;

  Color mezclaFinal;
  mezclaFinal.R =  (( ((color1.R * intColor1) / 100) + ((color2.R * intColor2) / 100) ) / 2) > 255 ? 255 :
                    ( ((color1.R * intColor1) / 100) + ((color2.R * intColor2) / 100) ) / 2;
  mezclaFinal.G =  (( ((color1.G * intColor1) / 100) + ((color2.G * intColor2) / 100) ) / 2) > 255 ? 255 :
                    ( ((color1.G * intColor1) / 100) + ((color2.G * intColor2) / 100) ) / 2;
  mezclaFinal.B =  (( ((color1.B * intColor1) / 100) + ((color2.B * intColor2) / 100) ) / 2) > 255 ? 255 :
                    ( ((color1.B * intColor1) / 100) + ((color2.B * intColor2) / 100) ) / 2;
  
   //cout << "("<< (unsigned)mezclaFinal.R << "," << (unsigned)mezclaFinal.G << "," << (unsigned)mezclaFinal.B <<")";

  return mezclaFinal; 
}

Color Sumar(Color color1,Color color2)
{
  Color colorObtenido;
   
  colorObtenido.R=(color1.R + color2.R) > 255 ? 255: color1.R + color2.R;
  colorObtenido.G=(color1.G + color2.G) > 255 ? 255: color1.G + color2.G;
  colorObtenido.B=(color1.B + color2.B) > 255 ? 255: color1.B + color2.B;

  return colorObtenido;
}

Color Restar(Color color1,Color color2)
{
  Color colorObtenido;
   
  colorObtenido.R=(color1.R - color2.R) < 0 ? 0: color1.R - color2.R;
  colorObtenido.G=(color1.G - color2.G) < 0 ? 0: color1.G - color2.G;
  colorObtenido.B=(color1.B - color2.B) < 0 ? 0: color1.B - color2.B;

  return colorObtenido;
}

Color GetComplementario(Color color)
{
 Color colorComplementario;

  colorComplementario.R = 255 - color.R;   
  colorComplementario.G = 255 - color.G;
  colorComplementario.B = 255 - color.B;

  return colorComplementario;
}

string GetHtmlHex(Color color)
{    
  return "#"+ Hex(color.R)+ Hex(color.G)+ Hex(color.B);
} 

string Hex(int valor)
{
string resultado;
char valorHex[2];
 sprintf(valorHex,"%X",valor);
 if (valor < 16 )
   {     
     resultado.insert(0,1,'0');
     resultado.insert(1,1,valorHex[0]);
    }   
  else
  {
    resultado.insert(0,1,valorHex[0]);
    resultado.insert(1,1,valorHex[1]);     
  } 
  transform(resultado.begin(), resultado.end(), resultado.begin(), ::tolower);   
 return resultado;
} 

string GetHtmlRgb(Color color)
{
 return "rgb("+to_string(color.R)+","+to_string(color.G)+","+to_string(color.B)+")";
}

void CrearSvgConTextoEscritoEnAltoContraste(string nombreArchivo,string texto,Color color)
{
 ofstream archivo;
 archivo.open(nombreArchivo);
 archivo <<"<svg xmlns=\"http://www.w3.org/2000/svg\">"
 << "<rect x=\"0\" y=\"0\" height=\"30\" width=\"120\" "
 << "style=\"fill:" +GetHtmlHex(GetComplementario(color))+ "\"/>"
 << "<text x=\"5\" y=\"18\" style=\"fill:"+GetHtmlRgb(color)
 << "\">"<<texto
 << "</text></svg>";
 archivo.close();

}
