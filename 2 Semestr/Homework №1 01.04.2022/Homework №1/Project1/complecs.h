#pragma once
#include <cmath>
#include <iostream>

class complecs
{
private:
	
	double x;
	double y;
public:
	complecs(double x = 0, double y = 0);
	complecs(const complecs& Complex);
	~complecs();
	
	
	complecs operator=(const complecs& Complecs);
	void setX(double x);
	double getX(double x);
	void setY(double y);
	double getY(double y);
	void set(double x, double y);
	double abs();
	complecs operator-();
	friend complecs operator+ (const complecs& Complecs1, const complecs& Complecs2);
	friend complecs operator- (const complecs& Complecs1, const complecs& Complecs2);
	complecs operator+=(const complecs& Complecs);
	friend complecs operator* (const complecs& Complecs1, const complecs& Complecs2);
	friend complecs operator/ (const complecs& Complecs1, const complecs& Complecs2);
	complecs operator-= (const complecs& Complecs);
	complecs operator*= (const complecs& Complecs);
	complecs operator/= (const complecs& Complecs);
	void step ();
	void print();
	void koren();
};