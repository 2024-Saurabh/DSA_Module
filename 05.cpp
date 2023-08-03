/* Write a program to input an integer 'n' and print the sum of all its even digits and sum of all its odd digits separately.


Digits mean numbers, not the places! That is, if the given integer is "132456", even digits are 2, 4 and 6 and odd digits are 1, 3 and 5.*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum_even = 0, sum_odd = 0;

    while (n != 0)
    {
        int p = n % 10;
        if (p % 2 == 0)
        {
            sum_even += p;
        }
        else
        {
            sum_odd += p;
        }
        n = n / 10;
    }
    cout << sum_even << " " << sum_odd;
}