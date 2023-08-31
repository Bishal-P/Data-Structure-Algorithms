#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    signed int num, len;
    cout << "Enter a negative number ";
    cin >> num;
    num = num * -1;
    if (num <= 0)
    {
        cout << "Please enter a negative number :";
    }
    else
    {
        cout << "Enter the number of bits :";
        cin >> len;
        int flag = 0, i = 0;
        int rem = 0;
        int bin[len];
        while (i < len)
        {
            rem = num % 2;
            bin[i] = rem;
            if (rem == 1 && flag == 0)
            {
                bin[i] = rem;
                flag = 1;
            }
            else if (rem == 0 && flag == 0)
            {
                bin[i] = rem;
            }
            else
            {
                rem = !rem;
                bin[i] = rem;
            }
            num = num / 2;
            i++;
        }
        for (int i = len - 1; i >= 0; i--)
        {
            cout << bin[i] << " ";
        }
    }
}