#include "Fractions.h"
int intPart;
long long x = 0;
long long y = 0;
long long k;



Fractions::Fractions()
{

}

Fractions::Fractions(long long numerator, long long denominator) : numerator(numerator), denominator(denominator) {
	if ((numerator < 0 and denominator < 0) or (numerator > 0 and denominator > 0)) {
		this->numerator = abs(numerator);
		this->denominator = abs(denominator);
	}
	else {
		this->numerator = -abs(numerator);
		this->denominator = abs(denominator);
	}
	_ASSERT(denominator != 0);

}

Fractions::Fractions(const Fractions& fraction) : numerator(fraction.numerator), denominator(fraction.denominator) {}

Fractions::~Fractions()
{
	this->numerator = 0;
	this->denominator = 0;
}

Fractions Fractions::operator=(const Fractions& Complecs)
{
	return Fractions(this->numerator = Complecs.numerator,
		this->denominator = Complecs.denominator);
}

void Fractions::setX(long long numerator)
{
	this->numerator = numerator;
}

double Fractions::getX(long long numerator)
{
	return this->numerator;
}

void Fractions::setY(long long denominator)
{
	this->denominator = denominator;
}

double Fractions::getY(long long  denominator)
{
	return this->denominator;
}

void Fractions::set(long long  numerator, long long denominator)
{
	this->numerator = numerator;
	this->denominator = denominator;
}



Fractions Fractions::operator+=(const Fractions& fraction)
{
	return Fractions(this->numerator = this->numerator *fraction.denominator +fraction.numerator *this->denominator, this->denominator = fraction.denominator *this->denominator);
}


Fractions Fractions::operator*=(const Fractions& fraction)
{
	return Fractions(this->numerator *fraction.numerator, this->denominator * fraction.denominator);
}

Fractions Fractions::operator/=(const Fractions& fraction)
{
	return Fractions(this->numerator * fraction.denominator, this->denominator * fraction.numerator);
}

Fractions Fractions::operator-=(const Fractions& fraction)
{
	return Fractions(this->numerator = this->numerator * fraction.denominator - fraction.numerator * this->denominator, this->denominator = fraction.denominator * this->denominator);
}



Fractions Fractions::reverse()
{
	return Fractions(-this->numerator, this->denominator);
}

Fractions Fractions::absl()
{
	return Fractions(abs(this->numerator), abs(this->denominator));
}


void Fractions::reduce()
{
	if (numerator != 0)
	{
		long long m = denominator,
			n = numerator,
			ost = m % n;
		while (ost != 0)
		{
			m = n; n = ost;
			ost = m % n;
		}
		long long nod = n;
		if (nod != 1)
		{
			numerator /= nod; denominator /= nod;
			if (denominator < 0) {
				numerator = -abs(numerator);
				denominator = abs(denominator);
			}
			
		}
	}
}

void Fractions::GetintPart()
{
	if (intPart == 0) {
		std::cout <<0 << "\n";
	}
	else {
		std::cout  << intPart<< "\n";
	}
}

void Fractions::print()
{
	
	std::cout << numerator << "/" << denominator << "\n";
}

void Fractions::GetMixedView()
{
	reduce();
	if (abs(numerator) >= abs(denominator))
	{
		intPart = (numerator / denominator);
		k= numerator % denominator;
		std::cout << intPart  << "." << abs(k) <<"/"<< denominator <<"\n";

	}
	else {
		std::cout << (numerator)<<"/"<< denominator <<"\n";
	}
	
	

}

void Fractions::operatordouble()
{
	
	if ((numerator > 0) and (denominator > 0))  {
		std::cout <<  float(numerator)/ denominator <<"\n";
	}
	else if ((numerator <0) or (y<0)) {
		std::cout  << (float(numerator) / y) << "\n";
	}
	
	
	
}



Fractions operator+(const Fractions& fraction1, const Fractions& fraction2)
{
	return Fractions(fraction1.numerator *fraction2.denominator + fraction2.numerator * fraction1.denominator,fraction1.denominator *fraction2.denominator);
}

Fractions operator-(const Fractions& fraction1, const Fractions& fraction2)
{
	return Fractions(fraction1.numerator * fraction2.denominator - fraction2.numerator * fraction1.denominator, fraction1.denominator * fraction2.denominator);
}

Fractions operator*(const Fractions& fraction1, const Fractions& fraction2)
{
	return Fractions(fraction1.numerator * fraction2.numerator, fraction1.denominator * fraction2.denominator);
}

Fractions operator*(const Fractions& fraction1, const long long mult)
{
	return Fractions(fraction1.numerator*mult,fraction1.denominator);
}

Fractions operator*(const long long mult, const Fractions& fraction2)
{
	return Fractions(fraction2.numerator*mult,fraction2.denominator);
}

Fractions operator/(const Fractions& fraction1, const Fractions& fraction2)
{
	return Fractions(fraction1.numerator * fraction2.denominator, fraction1.denominator * fraction2.numerator);
}

Fractions operator/(const long long mult, const Fractions& fraction2)
{
	return Fractions(fraction2.denominator*mult,fraction2.numerator);
}

Fractions operator/(const Fractions& fraction1, const long long mult)
{
	return Fractions(fraction1.numerator,fraction1.denominator*mult);
}

Fractions operator ^(const Fractions& fraction1, const long long mult)
{
	return Fractions(pow(fraction1.numerator, (mult)), pow(fraction1.denominator, (mult)));
}

Fractions operator ^(const long long mult, const Fractions& fraction1)
{
	return Fractions(pow(fraction1.numerator , (mult)), pow(fraction1.denominator ,(mult)));
}

std::ostream& operator<<(std::ostream& out, Fractions fraction)
{
	if (fraction.denominator == -1) {
		out << "non";
		return out;
	}
	out << fraction.numerator << '/' << fraction.denominator;
	return out;
}

bool operator ==(const Fractions& fraction1, const Fractions& fraction2)
{
	if ((float(fraction1.numerator) / fraction1.denominator) == (float(fraction2.numerator) / fraction2.denominator))
	{
		return(true);
	}
	else {
		return(false);
	}
}

bool operator!=(const Fractions& fraction1, const Fractions& fraction2)
{
	if ((float(fraction1.numerator) / fraction1.denominator) != (float(fraction2.numerator) / fraction2.denominator))
	{
		return (true);
	}
	else {
		return(false);
	}
}

bool operator >(const Fractions& fraction1, const Fractions& fraction2)
{
	if ((float(fraction1.numerator) / fraction1.denominator) > (float(fraction2.numerator) / fraction2.denominator))
	{
		return (true);
	}
	else {
		return (false);
	}
}

bool operator<(const Fractions& fraction1, const Fractions& fraction2)
{
	if ((float(fraction1.numerator) / fraction1.denominator) < (float(fraction2.numerator) / fraction2.denominator))
	{
		return (true);
	}
	else {
		return (false);
	}
}

bool operator>=(const Fractions& fraction1, const Fractions& fraction2)
{
	if ((float(fraction1.numerator) / fraction1.denominator) >= (float(fraction2.numerator) / fraction2.denominator))
	{
		return (true);
	}
	else {
		return (false);
	}
}

bool operator<=(const Fractions& fraction1, const Fractions& fraction2)
{
	if ((float(fraction1.numerator) / fraction1.denominator) <= (float(fraction2.numerator) / fraction2.denominator))
	{
		return (true);
	}
	else {
		return (false);
	}
}

