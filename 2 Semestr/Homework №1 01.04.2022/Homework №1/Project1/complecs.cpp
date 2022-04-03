#include "complecs.h"
#include <cmath>
#define M_PI
double phi;
double Phi;
double r;
double R;
int n;
double X;
double Y;
int i;
complecs::complecs(double x, double y) :x(x), y(y){}

complecs::complecs(const complecs& Complex) : x(Complex.x), y(Complex.y) {}

complecs::~complecs()
{
	this->x = 0;
	this->y = 0;
}

complecs complecs::operator=(const complecs& Complecs)
{
	return(this->x = Complecs.x,
	this->y = Complecs.y);
}

void complecs::setX(double x)
{
	this->x = x;
}

double complecs::getX(double x)
{
	return this->x;
}

void complecs::setY(double y)
{
	this->y = y;
}

double complecs::getY(double y)
{
	return this->y;
}

void complecs::set(double x, double y)
{
	this->x = x;
	this->y = y;
}

double complecs::abs()
{
	return sqrt (x*x+y*y);
}

complecs complecs::operator-()
{
	return complecs(-this->x,-this->y);
}

complecs complecs::operator+=(const complecs& Complecs)
{
	return(this->x += Complecs.x, this->y += Complecs.y);
}

complecs complecs::operator-=(const complecs& Complecs)
{
	return complecs(this->x += Complecs.x, this->y += Complecs.y);
}

complecs complecs::operator*=(const complecs& Complecs)
{
	return complecs(this->x * Complecs.x - this->y * Complecs.y, this->x * Complecs.x - this->y * Complecs.y);
}

complecs complecs::operator/=(const complecs& Complecs)
{
	return complecs((this->x * Complecs.x + this->y * Complecs.y) / (Complecs.x * Complecs.x + this->y * Complecs.y), (this->y * Complecs.x + this->x * Complecs.y) / (Complecs.x * Complecs.x + this->y * Complecs.y));
}

void complecs::step()
{
	std::cout << "Vvedite n :"<< "  " ;
	std ::cin >> n;
	phi = atan2(this->x, this->y);
	r = sqrt(x * x + y * y);
	R = pow(r, n);
	Phi = n * phi;
	X = R * cos(Phi);
	Y = R * sin(Phi);
	if (Y < 0){
		std::cout << X << Y << "i" << "\n";

	}
	else {
		std::cout << X  <<"+"<< Y << "i" << "\n";
	}
	
}

void complecs::print()
{
	if (y > 0) {
		std::cout << x << "+" << y << "i"<<"\n";
	}
	else {
		std::cout << x << y << "i"<<"\n";
	}
	
}

void complecs::koren()
{
	std::cout << "Vvedite n :" << "  ";
	std::cin >> n;
	for (i = 0; i < n; ++i)
	{
		
		phi = atan2(this->x, this->y);
		r = sqrt(x * x + y * y);
		R = pow(r, 1.0/n);
		Phi =  float((phi+2*i*M_PI(1)))/n;
		X = R * cos(Phi);
		Y = R * sin(Phi);
		if (Y < 0) {
			std::cout << X << Y << "i" << "\n";

		}
		else {
			std::cout << X << "+" << Y << "i" << "\n";
		}
	}
}

complecs operator+(const complecs& Complecs1, const complecs& Complecs2)
{
	return complecs(Complecs1.x+Complecs2.x,Complecs1.y+Complecs2.y);
}

complecs operator-(const complecs& Complecs1, const complecs& Complecs2)
{
	return complecs(Complecs1.x - Complecs2.x, Complecs1.y - Complecs2.y);
}

complecs operator*(const complecs& Complecs1, const complecs& Complecs2)
{
	return complecs(Complecs1.x* Complecs2.x- Complecs1.y* Complecs2.y, Complecs1.x * Complecs2.x - Complecs1.y * Complecs2.y);
}

complecs operator/(const complecs& Complecs1, const complecs& Complecs2)
{
	return complecs((Complecs1.x*Complecs2.x+ Complecs1.y * Complecs2.y)/ (Complecs2.x * Complecs2.x+ Complecs1.y * Complecs2.y), (Complecs1.y * Complecs2.x + Complecs1.x * Complecs2.y) / (Complecs2.x * Complecs2.x + Complecs1.y * Complecs2.y));
}
