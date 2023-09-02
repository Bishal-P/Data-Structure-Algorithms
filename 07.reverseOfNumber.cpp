#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number :";
    cin >> num;
    int i = 0, rev = 0;
    while (num > 0)
    {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    cout << "The reverse of the number is :" << rev << endl;
}
