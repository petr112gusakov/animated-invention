#pragma once
#include <cmath>
#include <iostream>

class Fractions
{
private:

	long long  numerator;
	long long denominator;
public:
	Fractions();
	Fractions(long long  numerator = 1, long long denominator = 1);
	Fractions(const Fractions& fraction);
	~Fractions();


	Fractions operator=(const Fractions& Complecs);
	void setX(long long numenator);
	double getX(long long numenator);
	void setY(long long denominator);
	double getY(long long denominator);
	void set(long  long numerator, long long denominator);

	friend Fractions operator+ (const Fractions& fraction1, const Fractions& fraction2);
	friend Fractions operator- (const Fractions& fraction1, const Fractions& fraction2);
	Fractions operator+=(const Fractions& fraction);
	friend Fractions operator* (const Fractions& fraction1, const Fractions& fraction2);
	friend Fractions operator* (const Fractions& fraction1, const long long  mult);
	friend Fractions operator* (const long long mult, const Fractions& fraction2);
	friend Fractions operator/ (const Fractions& fraction1, const Fractions& fraction2);
	friend Fractions operator/ (const long long mult, const Fractions& fraction2);
	friend Fractions operator/ (const Fractions& fraction1, const long long mult );
	Fractions operator*=(const Fractions& fraction);
	Fractions operator/=(const Fractions& fraction);
	Fractions operator-=(const Fractions& fraction);
	friend Fractions operator^( const Fractions& fraction1,const long long  mult);
	friend Fractions operator^(const long long  mult, const Fractions& fraction1 );
	Fractions reverse();
	Fractions absl();
	void reduce();
	void GetintPart();
	void print();
	void GetMixedView();
	void operatordouble ();
	friend std::ostream& operator <<(std::ostream& out, Fractions fraction);
	friend bool operator ==(const Fractions& fraction1, const Fractions& fraction2);
	friend bool operator!=(const Fractions& fraction1, const Fractions& fraction2);
	friend bool operator >(const Fractions& fraction1, const Fractions& fraction2);
	friend bool operator <(const Fractions& fraction1, const Fractions& fraction2);
	friend bool operator >=(const Fractions& fraction1, const Fractions& fraction2);
	friend bool operator <=(const Fractions& fraction1, const Fractions& fraction2);
};

