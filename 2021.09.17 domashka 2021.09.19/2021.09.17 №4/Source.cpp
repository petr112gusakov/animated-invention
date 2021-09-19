#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	int p = 0;
	cin >> a >> b;
	p = (109 + (a * b % 109)) % 109;
	cout << p << endl;
	return 0;
}