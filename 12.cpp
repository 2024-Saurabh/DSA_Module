// Write a program to generate the reverse of a given number N.Print the corresponding reverse number.
// Note : If a number has trailing zeros, then its reverse will not include them.
// For e.g., reverse of 10400 will be 401 instead of 00401.

#include <iostream>
using namespace std;

int main()
{
    int num, revnum = 0;
    cin >> num;
    while (num != 0)
    {
        revnum = revnum * 10;
        revnum = revnum + num % 10;
        num = num / 10;
    }
    cout << revnum;

    return 0;
}