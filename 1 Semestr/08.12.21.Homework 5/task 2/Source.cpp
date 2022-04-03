#include <iostream>

using namespace std;

int main(int argc, const char* argv[])
{
    double n = 0;
    cin >> n;

    long long num = *((long long*)&n);

    for (int i = 0; i < 8 * 8; ++i)
    {
        long long curbit = (8 * 8 - 1 - i);
        long long mask = (long long)1 << curbit;
        long long bit = num & mask;
        bit = bit >> curbit;
        cout << bit;
        if ((i + 1) % 4 == 0)
        {
            cout << " ";
        }
    }
    cout << endl;
    return EXIT_SUCCESS;
}