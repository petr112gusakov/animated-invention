#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	cin >> a ;
	int b = a / 100;
	int f = a % 100;
	int c = f / 10;
	int d = a % 10;
	cout << b + c + d << endl;
	return 0;
}