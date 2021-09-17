#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	int d = 0;

	cin >> a >> b;
	 d = a;
	 a = b;
	 b = d;

	cout << a << " " << b << endl;
	return 0;
} 