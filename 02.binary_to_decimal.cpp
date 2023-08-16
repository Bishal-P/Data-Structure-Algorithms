#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int bin, i = 0, dec = 0;
    cout << "Enter the binary number :";
    cin >> bin;
    while (bin > 0)
    {
        int rem = bin & 1;
        dec += rem * pow(2, i);
        bin /= 10;
        i++;
    }
    cout << "The decimal form is  :" << dec << endl;
    return 0;
}
