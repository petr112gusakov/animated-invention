#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int x=0;
    int y = 0;
    int m = 0;
    int n = 0;
    cin >> m >> n >> x >> y;
    if (n > 1)
    {

        if (y == 1)
        {
            cout << x  << ' ' << y+1 << '\n';
        }

        else if (y == n)
        {
            cout << x <<' ' << y - 1 << '\n';
        }

        else
        {
            cout << x << ' ' << y - 1 << '\n';
            cout << x << ' ' << y + 1 << '\n';
        }
    }
    if (m > 1)
    {

        if (x == 1)
        {
            cout << x+1 << ' ' << y  << '\n';
        }

        else if (x == m)
        {
            cout << x -1<< ' ' << y  << '\n';
        }

        else
        {
            cout << x-1 << ' ' << y  << '\n';
            cout << x +1 << ' ' << y << '\n';
        }
    }
    return EXIT_SUCCESS;


}