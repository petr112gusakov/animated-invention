#include <iostream>
#include "complecs.h"

using namespace std;
// Функции корень, степень, принт сами выводят результат. 


int main()
{
	complecs Complex1(4,1), Complex2(3,5), Complex3(2,4);
	Complex1.step();
	Complex1.print();
	Complex1.koren();
	Complex3 = Complex2 * Complex1;
	Complex1.print();
	Complex3.print();
	(-Complex2).print();
    cout<<Complex1.abs()<<"\n";
	cout << Complex1.arg();
	  


	return 0;
}