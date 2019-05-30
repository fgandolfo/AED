/*
	Trabajo #3
    03-Celsius
	Facundo Gandolfo
	29/5/2019
*/

#include <iostream>
#include <assert.h>

double Celsius(double);
bool AreNear(double, double, double = 0.001);

int main()
{
    assert(0 == Celsius(32));
    assert(17 < Celsius(64));
    std::cout << "Temperatura en celsius: " << Celsius(64) << "\n";

    assert(AreNear(17.7, Celsius(64), .1));
    assert(AreNear(17.7778, Celsius(64)));
    assert(AreNear(-17.7778, Celsius(0)));
}

double Celsius(double f) { return (5.0 / 9.0) * (f - 32); }

bool AreNear(double x, double y, double n)
{
    return (x - n) <= y and y <= (x + n);
}