#include "Header.h"

using namespace std;

void func2()
{
	int n = 0;
	int k = 0;
	cin >> n;
	while (n!=1)
	{
		if (n % 2 == 0)
		{
			n = n / 2;
		}
		else
		{
			n = 3*n + 1;
		}
		k += 1;
	}
	cout << k << endl;
	return ;
}

void func1() {
	int R = 0;
	R = 20;
	for (int i = 0; i < 2 * R; ++i)
	{
		for (int j = 0; j < 2 * R; ++j)
		{
			if (abs(((i - R) * (i - R) + (j - R) * (j - R)) - R * R) <= 5)
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
	return ;
}