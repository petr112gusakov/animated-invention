#include <iostream>
using namespace std;
int main(int argc, char* argv[])

{
	int n = 0;
	cin >> n;
	int r = 1;

	for (int i = 1; r <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (r > n) {
				break;
			}
			cout << r++ << " ";
		}
		cout << "\n";
	}

	return EXIT_SUCCESS;
}