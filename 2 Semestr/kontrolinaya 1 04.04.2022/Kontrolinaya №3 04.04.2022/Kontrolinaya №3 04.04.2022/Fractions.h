#pragma once
#include <cmath>
#include <iostream>

class Fractions
{
private:

	int x;
	int y;
public:
	Fractions(int x = 1, int y = 1);
	Fractions(const Fractions& fraction);
	~Fractions();


	Fractions operator=(const Fractions& Complecs);
	void setX(int x);
	double getX(int x);
	void setY(int y);
	double getY(int y);
	void set(int x, int y);
	Fractions operator-();
	friend Fractions operator+ (const Fractions& fraction1, const Fractions& fraction2);
	friend Fractions operator- (const Fractions& fraction1, const Fractions& fraction2);
	Fractions operator+=(const Fractions& fraction);
	friend Fractions operator* (const Fractions& fraction1, const Fractions& fraction2);
	friend Fractions operator/ (const Fractions& fraction1, const Fractions& fraction2);
	Fractions operator*=(const Fractions& fraction);
	Fractions operator/=(const Fractions& fraction);
	Fractions operator-=(const Fractions& fraction);
	void reduce();
	void GetintPart();
	void print();
	void GetMixedView();
	void operatordouble ();
	void operator ==(const Fractions& fraction );
	void operator !=(const Fractions& fraction);
	void operator >(const Fractions& fraction);
	void operator <(const Fractions& fraction);
	void operator >=(const Fractions& fraction);
	void operator <=(const Fractions& fraction);

};

