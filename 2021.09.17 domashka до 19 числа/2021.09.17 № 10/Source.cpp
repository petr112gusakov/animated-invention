#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	int d = 0;

	cin >> a >> b;
	while (a - b >= 0) {
		d = d + 1;
		a = a - b;
	}

	cout << d << endl;
	return 0;
}