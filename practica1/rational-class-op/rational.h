#pragma once

#include <iostream>

// Solucion con atributos privados.

class Rational
{
private:
	int den,num;

private:

	static int mcd(int a, int b);
	void reduce();

public:
	// Constructores

	Rational();
	Rational(int num, int den);

	
	// Operadores aritmeticos

	Rational operator+(const Rational& r2) const; // metodos
	Rational operator-(const Rational& r2) const; //metodo
	friend Rational operator*(const Rational& r1, const Rational& r2); //funciones externas a la clase 
	friend Rational operator/(const Rational& r1, const Rational& r2); //funciones externas a la clase 

	// Operadores logicos

	bool operator==(const Rational& r2) const;
	bool operator<(const Rational& r2) const;
	bool operator>(const Rational& r2) const;

	// Friends, en su caso
	
	friend std::ostream& operator<<(std::ostream& os, const Rational& r);
	friend std::istream& operator>>(std::istream& is, Rational& r);

};

// Operadores aritmeticos

Rational operator*(const Rational& r1, const Rational& r2);
Rational operator/(const Rational& r1, const Rational& r2);

// Entrada/salida

std::ostream& operator<<(std::ostream& os, const Rational& r);
std::istream& operator>>(std::istream& is, Rational& r);
