#include <iostream>
#include "Fractions.h"

using namespace std;



int main()
{ 
	Fractions fraction1(6,-4),fraction2(3,-2),fraction3(2,-8);
	
	fraction1.print();
	fraction1 /= fraction2;
	fraction1.print();

	return 0;
}