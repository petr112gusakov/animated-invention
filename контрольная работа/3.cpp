#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    int i = 0;
    int j = 0;
    int a = 0;
    int b = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> a;
            b += a;
        }
    }
    cout << b / 2;
    return EXIT_SUCCESS;
}