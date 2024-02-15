/* Fichero: rational.cc
* Descripción: Fichero de implementación del TAD racional
* Autores: Yago Torres García 878417 y Nicolás Pueyo Soria 870959
*/
#include "rational.h"
#include <string>
#include <stdlib.h>

// Auxiliares, privadas

int mcd(int a, int b)
{
	return ( b==0 ? a : mcd(b,a%b) );
}

void reduce(Rational& r)
{
	int emecede;
	if ((emecede = mcd(r.num, r.den))!=1)
	{
		r.num = r.num / emecede;
		r.den = r.den / emecede;
	}
}

// Inicializadores

void init(Rational& r)
{
	r.num=0;
	r.den=1;
}

void init(Rational& r,int num, int den)
{
	r.num=num;
	r.den=den;
}

// Entrada/salida

void write(std::ostream& os, const Rational& r)
{
	os << r.num << "/" << r.den;
}

void read(std::istream& is, Rational& r)
{
	char si;
	is >> r.num >> si >> r.den;
	reduce(r);
}

// Operaciones aritmeticas

Rational add(const Rational& r1, const Rational& r2)
{
	Rational result;
	init(result);
	result.num=r1.num*r2.den+r2.num*r1.den;
	result.den=r1.den*r2.den;
	reduce(result);
	return result;
}

Rational sub(const Rational& r1, const Rational& r2)
{
	Rational result;
	init(result);
	result.num = r1.num*(-r2.den)+r2.num*r1.den;
	result.den = r1.den*(-r2.den);
	reduce(result);
	return result;
}

Rational mul(const Rational& r1, const Rational& r2)
{
	Rational result;
	init(result);
	result.num = r1.num * r2.num;
	result.den = r1.den * r2.den;
	reduce(result);
	return result;
}

Rational div(const Rational& r1, const Rational& r2)
{
	Rational result;
	init(result);
	result.num = r1.num * r2.den;
	result.den = r1.den * r2.num;
	reduce(result);
	return result;
}

// Operaciones logicas

bool equal(const Rational& r1, const Rational& r2)
{
	return r1.num*r2.den == r1.den*r2.num;
}

bool lesser_than(const Rational& r1, const Rational& r2)
{
	return r1.num*r2.den < r1.den*r2.num;
}

bool greater_than(const Rational& r1, const Rational& r2)
{
	return r1.num*r2.den > r1.den*r2.num;
}
