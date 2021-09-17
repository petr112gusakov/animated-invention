#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	int d = 0;
	int s = 0;
	cin >> a ;
	b = a * a;
	
	s = b * b;
	d = s / a;
	cout << s+d+b+a+1 << endl;
	return 0;
}