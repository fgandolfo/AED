## Análisis del problema:
  
  ##### Transcripción del problema:
    Diseñar un programa en C++ que pueda demostrar la funcionalidad
    de los diferentes tipos de datos visto durante las clases.
  ##### Refinamiento del problema e Hipótesis de trabajo:
    Debemos generar numeros de todos los tipos de valores tales como
    bool, char, unsigned int, double y string como valores literales
    (constantes) y demostrar qué funciones pueden cumplir basado en 
    el tipo de valor.
  ##### Modelo IPO:
    Entradas: Valores de tipo bool, char, unsigned int, double y
    string ingresados por el programador como constantes.
    Proceso: Mediante sumas y distintos operadores demostramos las
    funcionalidades de los diferentes tipos de valores.
    Salidas: Mostramos a través de la pantalla los diferentes ejemplos
    posibles.

## Diseño de la solución:
    Primero incializamos todas las constantes de los 5 distintos tipos 
    de valores, luego en el main mostramos un nombre que tenga el tipo 
    de dato "string", y hacemos la suma de dos integrales, la división 
    de dos reales "double", usamos un "char" para declara una nueva linea
    y, con dos valores booleanos, afirmamos que la suma y la
    división fueron correctas y que su resultado pertenece al tipo de
    valor correspondiente.

    Verificamos que los int sean unsigned usando la función assert, la
    cual termina el programa si la condición impuesta en la función
    no es la correcta.

    Luego mostramos un texto explicativo escrito mediante un string
    junto con los dos valores booleanos que muestran el valor 1 dando
    conformidad de verdadero sobre las acciones realizadas con los valores
    int y double.

## El otro tipo de valor que vimos en clase es el void, el cual es un valor vacío como lo indica su nombre. 
