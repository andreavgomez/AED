  
### **Algoritmos y Estructuras de Datos**

• **Curso (Año):** K1051 (2020)

• **Legajo:** 96.259-6 

• **Apellido y Nombre:** Gomez, Andrea Vanina

---
### 03-Bisiesto

#### **Etapa #1: Análisis Problema**
#### Transcripción del problema:
Dado un año, determinar si es bisiesto.

#### Refinamiento del problema e hipótesis de trabajo: 
Un año es bisiesto si cumple los siguientes criterios:

Es bisiesto si es divisible entre 4.
Pero no es bisiesto si es divisible entre 100.
Pero sí es bisiesto si es divisible entre 400. (2000 y 2400 sí son bisiestos son divisibles entre 100 pero también entre 400. 1900, 2100, 2200 y 2300 no lo son porque solo son divisibles entre 100).
1582 Año desde el cual se empieza a evaluar si un año es bisiesto

![IPO](https://github.com/andreavgomez/AED/blob/master/docs/ipo_bisiesto.pdf "modelo IPO")

---
### **Etapa #2: Diseño de la Solución**

El año será de tipo unsigned, solo se tomaran los años positivos. Se utilizara la función IsBisiesto, la cual tomará los años como dominio y devolverá una variable tipo bool (true para los bisiestos, false para los años no bisiestos)

En el enfoque algorítmico, se consideran las siguientes proposiciones o enunciados lógicos

m: 1582 Año desde el cual se empieza a evaluar si un año es bisiesto
p: Es divisible entre 4
q: Es divisible entre 100
r: Es divisible entre 400

La fórmula lógica seria:  m ^ (p ^ (-q v r))

### Léxico:
anio ∈ N; IsBisiesto ∈ B;

### Definición:
IsBisiesto N -> B : m ^ (p ^ (-q v r))

---
### Arbol de expresion:

  ![Arbol de expresion](https://github.com/andreavgomez/AED/blob/master/docs/Arbol de expresion.pdf "Arbol de expresion")
  
  ![Arbol de expresion](https://github.com/andreavgomez/AED/blob/master/03-Bisiesto/Arbol%20de%20expresion.pdf "Arbol de expresion")

---
