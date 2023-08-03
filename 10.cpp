// Write a program that asks the user for a number N and a choice C. And then give them the possibility to choose between computing the sum and computing the product of all integers in the range 1 to N (both inclusive).
// If C is equal to -
//  1, then print the sum
//  2, then print the product
//  Any other number, then print '-1' (without the quotes)
#include <iostream>
using namespace std;

int main()
{
    int n, select, sum = 0, mul = 1;
    cin >> n;
    cin >> select;

    if (select == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }
        cout << sum << endl;
    }
    else if (select == 2)
    {
        for (int i = 1; i <= n; i++)
        {
            mul *= i;
        }
        cout << mul << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}