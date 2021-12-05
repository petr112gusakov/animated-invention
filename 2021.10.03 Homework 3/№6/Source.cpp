#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int k = 0;
	int x = 0;
	int z = 0;
	int p = 0;
	int n = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> x;

		if (x)
		{
			x /= abs(x);
		}
		switch (x)
		{
		case 1: p++; break;
		case 0: z++; break;
		case -1: n++; break;
		}
	}
	cout << z << ' ' << p << ' ' << n;

	return EXIT_SUCCESS;
}