#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{

    int x =0 
    int max =0
    int min=0 
    int i = 2
    cin >> min >> max;
    while (cin >> x)
    {
        i++;
        if (i % 2)
        {
            if (x < min)
            {
                min = x;

            }
            else if (x > max)
            {
                max = x;
                cout << max + min;
            }
            
        }
        
    }



    return EXIT_SUCCESS;
}