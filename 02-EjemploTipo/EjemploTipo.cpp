#include <assert.h>
#include <iostream>
#include <string>

main () {
	
	int num1 = 10, num2 = 4;
	double numr1 = 10.0, numr2 = 4.0;
	bool a, b;
	char linea = '\n';
	std::string nombre("Verificamos el uso de enteros y reales para la division:\n\nLa division de dos enteros debe darnos un entero y la division de dos reales debe darnos un real distinto al valor de la division de dos enteros.\n\nEsto lo verifico usando dos variables booleanas.\n\nEste texto fue escrito con una variable string para no tener restriccion de caracteres y la nueva linea de texto con nombre 'linea' la logre con un char igual a los caracteres barra lateral y n usados para este proposito, por lo tanto quedan ejemplificadas todas las variables vistas durante la clase.\n\nLos proximos valores booleanos a y b deben ser igual a 1 para que queden verificados los ejemplos de los 2 numeros enteros y los 2 numeros reales (los numeros estan presentes en la codificacion del programa):\n\n");
	
	std::cout << nombre << linea;		// Con un string puedo usar un texto que contenga espacios
	assert(num1 > 0); 					// Verificamos que ambos números sean unsigned
	assert(num2 > 0);
	
	if ((num1/num2)==2)				// Verifico la suma de dos integrales usando
		a=true;							// un booleano
	else (a=false);
	std::cout << "a = " << a << linea;			// Uso el char "linea" para un nuevo renglón
	
	if (numr1/numr2 == num1/num2)		// Verifico la división de dos reales de un resultado
		b=false;						// decimal mediante un valor booleano
	else (b=true);
	std::cout << "b = " << b << linea;
}