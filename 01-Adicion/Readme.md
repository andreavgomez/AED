  
• #**Algoritmos y Estructuras de Datos**

• **Curso (Año):** K1051 (2020)

• **Legajo:** 96.259-6 

• **Apellido y Nombre:** Gomez, Andrea Vanina

---
### 01-Adicion

#### **Obtener del usuario dos números y mostrarle la suma**
Escribo un programa en C++ que muestre el resultadode la suma de dos numeros enteros.

* Leer el primer entero y guardarlo en la variable  **a**
* Leer el segundo entero y guardarlo en la variable  **b**
* Mostrar en pantalla **a + b**

---
### Modelo IPO

![IPO] ()

---
### Algoritmo Textual en C ++

'''
/* Adicion
*Andrea Gomez
*24/04/2020
*/

#include <iostream>

int main() {
    int a,b;
    std::cout << "ingrese el primer valor para la suma \n";
    std::cin >> a;
    std::cout << "ingrese el segundo valor para la suma \n";
    std::cin >> b;
    std::cout << "El resultado de la suma es \n";
    std::cout << a + b;
}
'''

---
### Algoritmo Visual - Diagrama de Flujo

! [] (docs/DF_Adicion.png)

---
### Ambiente de Desarrollo

Plataforma: Windows 7, MinGW (configuracion en las variables de entorno en Path: "C:\MinGW\bin; "C:\MinGW\msys'1.0\bin), IDE: Visual Studio Code

 1) **Compilacion C ++**

En Terminal CMD:

/*
c:\AED\Adicion>make adicion
g++   -std=c++17  adicion.cpp  -o adicion
*/

1) **Compilacion C ++**

En Terminal CMD:

/*
c:\AED\Adicion>adicion.exe
*/

