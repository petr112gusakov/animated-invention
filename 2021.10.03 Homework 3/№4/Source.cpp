#include <iostream>
using namespace std;
int fact(int n) 
{
	if (n == 0 || n == 1)
		return 1;
	else
		return n * fact(n - 1);
}
int main() 
{
	int n, r, combin;
	cin >> n;
	cin >> r;
	combin = fact(n) / (fact(r) * fact(n - r));
	cout <<  combin;
	return 0;
}