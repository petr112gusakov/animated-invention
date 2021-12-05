#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int n, x = 0;
	int sum = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		sum += x;
	}
	cout << sum;
	return EXIT_SUCCESS;
}