#include "rational.h"
#include <string>

// Auxiliares

int Rational::mcd(int a, int b)
{
	return ( b == 0 ? a : mcd(b,a%b));
}

void Rational::reduce()
{
	int emecede;
	if ((emecede = mcd(num,den))!=1) {
		num=num/emecede;
		den=den/emecede;
	}
}

// Constructores

Rational::Rational()
:	num(0),den(1)
{}

Rational::Rational(int num, int den)
	: num(num), den(den)
{}

// Entrada/salida

void Rational::write(std::ostream& os) const
{
	os << num << "/" << den << " ";
}

void Rational::read(std::istream& is)
{
	char si;
	is >> num >> si >> den;
	reduce();
}

// Operaciones aritmeticas

Rational Rational::add(const Rational& r2) const
{
	Rational result;
	result.num=num*r2.den+r2.num*den;
	result.den=den*r2.den;
	result.reduce();
	return result;
}

Rational Rational::sub(const Rational& r2) const
{
	Rational result;
	result.num=num*(-r2.den)+r2.num*den;
	result.den=den*(-r2.den);
	result.reduce();
	return result;
	
}

Rational Rational::mul(const Rational& r2) const
{
	Rational result;
	result.num = num * r2.num;
	result.den = den * r2.den;
	result.reduce();
	return result;
}

Rational Rational::div(const Rational& r2) const
{
	Rational result;
	result.num=num*r2.den;
	result.den=den*r2.num;
	result.reduce();
	return result;
}

// Operaciones logicas

bool Rational::equal(const Rational& r2) const
{
	return num*r2.den == den*r2.num;
}

bool Rational::lesser_than(const Rational& r2) const
{
	return num*r2.den < den*r2.num;
}

bool Rational::greater_than(const Rational& r2) const
{
	return num*r2.den > den*r2.num; 
}
