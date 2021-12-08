#include <iostream>

using namespace std;

int main(int argc, const char* argv[])
{
	int n = 0;
	int num1 = 0;
	int num2 = 0;

	cin >> n >> num1 >> num2;
	cout << endl;
	for (int i = 31; i >= 0; --i)
	{
		if (n & (1 << i))
		{
			cout << 1;
		}
		else
		{
			cout << 0;
		}
	}
	cout << endl;

	int mask = n;

	mask &= ~(1 << (num1 - 1));
	mask &= ~(1 << (num2 - 1));
	mask &= n;

	int bit1 = 0;
	int bit2 = 0;

	int t1 = num1;
	int t2 = num2;

	num1 = min(t1, t2);
	num2 = max(t1, t2);

	if (n & (1 << (num1 - 1)))
	{
		bit1 |= (1 << (num1 - 1));
	}
	if (n & (1 << (num2 - 1)))
	{
		bit2 |= (1 << (num2 - 1));
	}

	bit1 <<= (abs(num1 - num2));
	bit2 >>= (abs(num1 - num2));

	mask |= bit1;
	mask |= bit2;

	n = mask;

	for (int i = 31; i >= 0; --i)
	{
		if (n & (1 << i))
		{
			cout << 1;
		}
		else
		{
			cout << 0;
		}
	}
	cout << endl;

	return EXIT_SUCCESS;
}