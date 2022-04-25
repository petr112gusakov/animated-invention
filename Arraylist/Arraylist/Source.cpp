#include<iostream>
#include "Arraylist.h"

using namespace std;

int main()
{
	Arraylist list(5);
	cout << list << endl;
	list.pushend(5);
	cout << list << endl;
	list.pushend(4);
	list.pushend(3);
	list.pushend(2);
	list.pushend(1);
	cout << list << endl;
	list.pushend(0);
	cout << list << endl;
	cout << list.extractend();
	cout << list << endl;

	list[1] = 1;
	cout << list << endl;
	list[5] = 10;
	cout << list << endl;
	list[16] = 20;
	cout << list << endl;
	list[-2] = 20;
	cout << list << endl;
	list.sort();
	cout << list << endl;
	list.pushbegin(3);
	cout << list << endl;
	list.extract(3);
	cout << list << endl;



	return 0;
}