#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	for (int i = a; i <= b; i++)
	{

		if (i % d == c) 
		{
			cout << i << ' ';
		}

	}

	return EXIT_SUCCESS;
}