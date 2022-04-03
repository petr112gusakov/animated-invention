#include <iostream>

using namespace std;

int main(int argc, const char* argv[])
{
    int n = 0;
    cin >> n;

    int minusnum = n >> 31;
    int a = minusnum ^ n;
    a -= minusnum;

    cout << a << endl;

    return EXIT_SUCCESS;
}