/******************/
#include "Color.h"
/******************/

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
  
   cout << "("<< (unsigned)mezclaFinal.R << "," << (unsigned)mezclaFinal.G << "," << (unsigned)mezclaFinal.B <<")";

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
