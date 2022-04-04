#include <iostream>
#include "Fractions.h"

using namespace std;



int main()
{ 
	Fractions fraction1(5,-3),fraction2(-2,-3),fraction3(2,-8);
	
	cout << fraction1.reverse()<<endl;
	cout << fraction1.absl() << endl;
	fraction1.print();
	fraction2.print();
	cout << 1/ (3 * fraction1 + 4 * fraction2) << endl;
	cout << fraction1 / fraction2<<endl;

	fraction1.print();
	cout<<(fraction1>=fraction2)<<endl;
	cout << (fraction1^ 2);

	return 0;
}