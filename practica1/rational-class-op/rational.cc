#include "rational.h"

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
{
}

Rational::Rational(int num, int den)
:	num(num), den(den)
{
}

// Operadores aritmeticos

Rational Rational::operator+(const Rational& r2) const
{
	Rational result;
	result.num=num*r2.den+r2.num*den;
	result.den=den*r2.den;
	result.reduce();
	return result;
}

Rational Rational::operator-(const Rational& r2) const
{
	Rational result;
	result.num=num*(-r2.den)+r2.num*den;
	result.den=den*(-r2.den);
	result.reduce();
	return result;
}

Rational operator*(const Rational& r1, const Rational& r2)
{
	Rational result;
	result.num = r1.num * r2.num;
	result.den = r1.den * r2.den;
	result.reduce();
	return result;
}

Rational operator/(const Rational& r1, const Rational& r2)
{
	Rational result;
	result.num=r1.num*r2.den;
	result.den=r1.den*r2.num;
	result.reduce();
	return result;
}

// Operadores logicos

bool Rational::operator==(const Rational& r2) const
{
	return num*r2.den == den*r2.num;
}

bool Rational::operator<(const Rational& r2) const
{
	return num*r2.den < den*r2.num;
}

bool Rational::operator>(const Rational& r2) const
{
	return num*r2.den > den*r2.num;
}

// Entrada/salida

std::ostream& operator<<(std::ostream& os, const Rational &r)
{
	os << r.num << "/" << r.den << " ";
	return os;
}

std::istream& operator>>(std::istream& is, Rational& r)
{
	char si;
	is >> r.num >> si >> r.den;
	r.reduce();
	return is;
}



