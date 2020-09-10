#pragma once

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
