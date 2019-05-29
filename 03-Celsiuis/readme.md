## An�lisis del problema:
  
  ##### Transcripci�n del problema:
    Dise�ar un programa en C++ que pueda, dada una temperatura
    expresada en Farenheit, devolver la misma temperatura
    expresada en Celsius.
  ##### Refinamiento del problema e Hip�tesis de trabajo:
    Debemos generar una funci�n que, cuando reciba un valor 'x'
    perteneciente a los reales, la funci�n calcule una imagen en
    los reales igual a (matem�ticamente):
			## f(x) = [5*(f-32)]/9
  ##### Modelo IPO:
    Entradas: Un valor de tipo flotante representativo de una
    temperatura expresada en Farenheit.
    Proceso: Procesamos la funci�n 'Celsius' y nos devuelve el valor
    de la temperatura en Celsius.
    Salidas: Mostramos a trav�s del monitor el resultado devuelto por
    nuestra funci�n.

## Dise�o de la soluci�n:
    Primero, recibimos el valor de tipo flotante dado por el usuario.
    Luego, mediante la funci�n 'assert' verificamos que la funci�n nos
    devuelva los resultados deseados, haciendo testeos de posibles fallas.
    
    Una vez verificada la funci�n, mostramos en pantalla el valor en Celsius
    ingresado por el usuario, tambi�n de tipo flotante.

    Para la funci�n booleana AreNear, tomamos el valor de dos valores de tipo
    flotante y evaluamos si su tolerancia es mayor a el 0,1%