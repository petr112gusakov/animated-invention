#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    int k = 0;
    int m = 0;
    cin >> k >> m >> n;
    int a = 0;
    if (n < k) {
        a = 2 * m;
    }
    else {
        a = 2 * n / k * m;
        if (2 * n % k != 0)
            a += m;
    }
    cout << a;
    return EXIT_SUCCESS;
}
