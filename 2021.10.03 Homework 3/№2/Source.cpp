#include <iostream>
using namespace std;
int main(int argc, char* argv[])

{
	int r = 2;
	int n = 0;
	cin >> n;
	if (n == 0) {
		cout << 1;
	}
	else if (n > 0) {
		for (int i = 1; i < n; i++)
		{
			r = r * 2;
		}

		cout << r;
	}

	return EXIT_SUCCESS;
}