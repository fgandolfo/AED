#include <iostream>
#include <string>
#include <assert.h>


int main () {
	// Valores booleanas
	bool a=true, b=false, c, d;
	
	c = a or b;
	assert (c==true);
	d = a and b;
	assert (d==false);

	// Variable string
	std::string nombre = "Facundo ", apellido = "Gandolfo\n";
	std::string completo = nombre + apellido;

	std:: cout << completo;
	std::cout << completo.length();

	// Variable int
	int num1=5, num2=6;
	assert (num2>num1);
	std::cout << num2%num1 << "\n";

	// Variable double
	double r1=2.5, r2=6.32;
	std::cout << r1*r2 << "\n";
	assert (r1 != r2);
	
	// Variable char
	char c1 = 'A', c2='B';
	assert (c1<c2);
	std::cout << c1 + 1 << "\n";
	std::cout << c1+c2;
}