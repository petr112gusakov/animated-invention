#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int a, b, c, d =0;
	cin >> a >> b >> c >> d;

	for (int i = 0; i <= 1000; i++)
		if (a * i * i * i + b * i * i + c * i + d == 0)
			cout << i << ' ';



	return EXIT_SUCCESS;
}