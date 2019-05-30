## Análisis del problema:
  
  ##### Transcripción del problema:
    Diseñar un programa en C++ que pueda, dada una temperatura
    expresada en Farenheit, devolver la misma temperatura
    expresada en Celsius.
  ##### Refinamiento del problema e Hipótesis de trabajo:
    Debemos generar una función que, cuando reciba un valor 'x'
    perteneciente a los reales, la función calcule una imagen en
    los reales igual a (matemáticamente):

![equation](https://user-images.githubusercontent.com/49297877/58594070-1055f800-8243-11e9-8204-727f3eb3f3bf.png)
    
    ##### Modelo IPO:
    Entradas: Un valor de tipo flotante representativo de una
    temperatura expresada en Farenheit.
    Proceso: Procesamos la función 'Celsius' y nos devuelve el valor
    de la temperatura en Celsius.
    Salidas: Mostramos a través del monitor el resultado devuelto por
    nuestra función.

## Diseño de la solución:
    Primero, recibimos el valor de tipo flotante dado por el usuario.
    Luego, mediante la función 'assert' verificamos que la función nos
    devuelva los resultados deseados, haciendo testeos de posibles fallas.
    
    Una vez verificada la función, mostramos en pantalla el valor en Celsius
    ingresado por el usuario, también de tipo flotante.

    Para la función booleana AreNear, tomamos el valor de dos valores de tipo
    flotante y evaluamos si su tolerancia es mayor a el 0,1%
