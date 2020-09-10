### **Algoritmos y Estructuras de Datos**

• **Curso (Año):** K1051 (2020)

• **Legajo:** 96.259-6 

• **Apellido y Nombre:** Gomez, Andrea Vanina

---
### **Etapa #1: Análisis Problema**
### Transcripción del problema:
Diseñar un tipo Color basado en el modelo RGB1, con tres canales de 8 bits.
Todo color está compuesto por tres componentes: intensidad de red (rojo), de green (verde), y de blue (azul). 
Cada intensidad está en el rango [0, 255]. 
Definir los valores para rojo, azul, verde, cyan, magenta, amarillo, negro, y blanco. 
Dos colores se pueden mezclar, lo cual produce un nuevo color que tiene el promedio de intensidad para cada componente.

### Refinamiento del problema e hipótesis de trabajo: 
Se debera poder realizar distintas operaciones teniendo en cuenta que el tipo de dato Color tiene (2^8 x 2^8 x 2^8)= 2^24 posibles colores cada color tiene 3 componentes y cada uno un rango entre [0,255].

---
### **Etapa #2: Diseño de la Solución**

Al realizar las distintas operaciones, se pondran limites para no exedernos de los valores que acepta el tipo de dato, como maximo se considerara el valor 255 y como minimo el valor 0.

### Léxico:
Especificacio del conjunto de valores

Color ∈ { {a,b,c} uint8_t / {a,b,c} ∈ [0,255]};
uint8_t ∈ [0,255];

### Definición:
IPO: (Especificacion del conjunto de operaciones)

IsIgual: color x Color --> Bool
Mezclar: Color X Color X uint8_t X uint8_t --> Color
Sumar: Color X Color  --> Color
Restar: Color X Color  --> Color
GetComplementario: Color  --> Color
GetHtmlHex: Color  --> string
Hex: int --> string
GetHtmlRgb: Color --> string
CrearSvgConTextoEscritoEnAltoContraste: string X string X Color --> Archivo .svg

---
