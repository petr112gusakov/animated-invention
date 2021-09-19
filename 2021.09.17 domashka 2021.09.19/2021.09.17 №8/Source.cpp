#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	int d = 0;
	int e = 0;
	int c = 0;
	int f = 0;
	int m = 0;
	cout << "First three (Beggining time)" << endl;
	cin >> a >> b >> c ;
	cout << "Second three (End time)" << endl;
	cin  >> d >> e >> f;
	a = a * 3600;
	b = b * 60;
	d = d * 3600;
	e = e * 60;
	m = (d + e + f) - (a + b + c);
	cout << m << endl;
	return 0;
}