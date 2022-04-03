#include "Fractions.h"
int intPart;
double x = 0;
double y = 0;
int k;


Fractions::Fractions(int x, int y) : x(x), y(y) {
	if ((x < 0 and y < 0) or (x > 0 and y > 0)) {
		this->x = abs(x);
		this->y = abs(y);
	}
	else {
		this->x = -abs(x);
		this->y = abs(y);
	}
	_ASSERT(y != 0); }

Fractions::Fractions(const Fractions& fraction) : x(fraction.x), y(fraction.y) {}

Fractions::~Fractions()
{
	this->x = 0;
	this->y = 0;
}

Fractions Fractions::operator=(const Fractions& Complecs)
{
	return Fractions(this->x = Complecs.x,
		this->y = Complecs.y);
}

void Fractions::setX(int x)
{
	this->x = x;
}

double Fractions::getX(int x)
{
	return this->x;
}

void Fractions::setY(int y)
{
	this->y = y;
}

double Fractions::getY(int y)
{
	return this->y;
}

void Fractions::set(int x, int y)
{
	this->x = x;
	this->y = y;
}

Fractions Fractions::operator-()
{
	return Fractions(-this->x, this->y);
}

Fractions Fractions::operator+=(const Fractions& fraction)
{
	return(this->x = this->x*fraction.y+fraction.x*this->y, this->y = fraction.y*this->y);
}

Fractions Fractions::operator*=(const Fractions& fraction)
{
	return Fractions(this->x*fraction.x, this->y * fraction.y);
}

Fractions Fractions::operator/=(const Fractions& fraction)
{
	return Fractions(this->x * fraction.y, this->y * fraction.x);
}

Fractions Fractions::operator-=(const Fractions& fraction)
{
	return Fractions(this->x = this->x * fraction.y - fraction.x * this->y, this->y = fraction.y * this->y);
}

void Fractions::reduce()
{
	if (x != 0)
	{
		int m = y,
			n = x,
			ost = m % n;
		while (ost != 0)
		{
			m = n; n = ost;
			ost = m % n;
		}
		int nod = n;
		if (nod != 1)
		{
			x /= nod; y /= nod;
			if (y < 0) {
				x = -abs(x);
				y = abs(y);
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
	
	std::cout << x << "/" << y << "\n";
}

void Fractions::GetMixedView()
{
	reduce();
	if (abs(x) >= abs(y))
	{
		intPart = (x / y);
		k=x % y;
		std::cout << intPart  << "." << abs(k) <<"/"<<y<<"\n";

	}
	else {
		std::cout << (x)<<"/"<<y<<"\n";
	}
	
	

}

void Fractions::operatordouble()
{
	
	if ((x > 0) and (y > 0))  {
		std::cout <<  float(x)/ y <<"\n";
	}
	else if ((x<0) or (y<0)) {
		std::cout  << (float(x) / y) << "\n";
	}
	
	
	
}

 void Fractions::operator==(const Fractions& fraction)
{
	if ((float(this->x) / this->y) == (float(fraction.x) / fraction.y)) 
	{
		std ::cout<< "true";
	}
	else {
		std ::cout << "false";
	}
}

 void Fractions::operator!=(const Fractions& fraction)
 {
	 if ((float(this->x) / this->y) != (float(fraction.x) / fraction.y))
	 {
		 std::cout << "true";
	 }
	 else {
		 std::cout << "False";
	 }
 }

 void Fractions::operator>(const Fractions& fraction)
 {
	 if ((float(this->x) / this->y) > (float(fraction.x) / fraction.y))
	 {
		 std::cout << "True";
	 }
	 else {
		 std::cout << "false";
	 }
 }

 void Fractions::operator<(const Fractions& fraction)
 {
	 if ((float(this->x) / this->y) < (float(fraction.x) / fraction.y))
	 {
		 std::cout << "true";
	 }
	 else {
		 std::cout << "false";
	 }
 }

 void Fractions::operator>=(const Fractions& fraction)
 {
	 if ((float(this->x) / this->y) >= (float(fraction.x) / fraction.y))
	 {
		 std::cout << "true";
	 }
	 else {
		 std::cout << "false";
	 }
 }

 void Fractions::operator<=(const Fractions& fraction)
 {
	 if ((float(this->x) / this->y) == (float(fraction.x) / fraction.y))
	 {
		 std::cout << "true";
	 }
	 else {
		 std::cout << "false";
	 }
 }


Fractions operator+(const Fractions& fraction1, const Fractions& fraction2)
{
	return Fractions(fraction1.x*fraction2.y+ fraction2.x * fraction1.y,fraction1.y*fraction2.y);
}

Fractions operator-(const Fractions& fraction1, const Fractions& fraction2)
{
	return Fractions(fraction1.x * fraction2.y - fraction2.x * fraction1.y, fraction1.y * fraction2.y);
}

Fractions operator*(const Fractions& fraction1, const Fractions& fraction2)
{
	return Fractions(fraction1.x * fraction2.x , fraction1.y * fraction2.y);
}

Fractions operator/(const Fractions& fraction1, const Fractions& fraction2)
{
	return Fractions(fraction1.x * fraction2.y, fraction1.y * fraction2.x);
}

