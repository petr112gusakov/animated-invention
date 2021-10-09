#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
    int  x;
    int z = 0, p = 0, n = 0;
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