#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{

    
        
    int a, b, c, d, f;
    cin >> a >> b;
    d = a;
    f = b;
    if(a < b)
    {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }
    while(b)
    {
        c = a;
        a = b;
        b = c % b;
    }
    b = (d * f)/a;
    cout << b;
    return EXIT_SUCCESS;
}