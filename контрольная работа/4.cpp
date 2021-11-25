#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int x = 0;
    int l = 0; 
    int r = 0; 
    l = 1;
    r = 1000000001;
    char c;
    do
    {
        x = (l + r) / 2;
        cout << x << endl; cout.flush();
        cin >> c;
        if (c == '>')
        {
            l = x; 
        }
        else
        {
            r = x;
        }
    } while (c != '=');

    return EXIT_SUCCESS;
}