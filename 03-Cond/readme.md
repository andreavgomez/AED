### **Algoritmos y Estructuras de Datos**

• **Curso (Año):** K1051 (2020)

• **Legajo:** 96.259-6 

• **Apellido y Nombre:** Gomez, Andrea Vanina

---
### 03-Funciones y Operador Condicional

#### **Demostrar manejo de funciones y del operador condicional en C++**


Hipotesis de trabajo:
Desarrollar las siguientes funciones
1. Valor absoluto.
2. Valor mínimo entre dos valores.
3. Función , definida por

Restricciones:
• Las pruebas deben realizarse con assert.
• Cada función debe aplicar el operador condicional.

Diseño de la solucion:

Realice tres funciones

• Funcion Valor absoluto:
 - Lexico: Z -> Z / abs(x)=|X|
 - Pruebas: {-x  x < 0 
            { x  e.o.c
            Ej:
            abs(3)=3
            abs(-3)=3
            abd(0)=0
 - Prototipo: int abs(int);
 - Definicion: int Abs(int x)            

• Funcion valor minimo:
 - Lexico: Z x Z -> Z 
 - Pruebas: {x  x < y 
            {y  x > y
            Ej:
            7 <= 10  --> 7
            abd(0)=0
 - Prototipo: int ValorMinimo(int,int);
 - Definicion: int ValorMinimo(int x, int y)   

 • Funcion F3:
 - Lexico: R -> R 
 - Pruebas: {-x  (-3.0 <= x) and (3.0 >= x)
            { x  e.o.c
            Ej:
             3.0 == Beta(-3.0) 
             0.0 == Beta(0.0) 
             -3.0 == Beta(3.0) 
             4.0 == Beta(4.0)
             -4.0 == Beta(-4.0)
 - Prototipo: double Beta(double);
 - Definicion: double Beta(double x)                   
---