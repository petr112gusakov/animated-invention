#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    int b= 0;
    int c = 0;
    int m = 0;
    int n = 0;

    cin >> a >> b >> c;
    if (a > b) 
    {
        m = b;
        b = a;
        a = m;
    }
    if (b > c)
    {
        n = c;
        c = b;
        b = n;
    }
    if (a > b)
    {
        m = b;
        b = a;
        a = m;
    }
    if ((b + c) > a && (c + a) > b && (b + a) > c)
    {
        if (c * c == a * a + b * b)
        {
            cout << "right";
        }
        else if (c * c < a * a + b * b)
        {
            cout << "acute";
        }
        else
        {
            cout << "obtuse";
        }
    }
    else
        cout << "impossible";
    return EXIT_SUCCESS;
}