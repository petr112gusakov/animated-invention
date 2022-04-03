#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int a;
	cin >> a;

	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {


			cout << i << ' ';
		}
	}

	return EXIT_SUCCESS;
}