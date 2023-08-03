// Given a number N, find its square root.You need to find and print only the integral part of square root of N.For eg.
// if number given is 18, answer is 4.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sqrt = 1, i = 1;

    while (sqrt <= n)
    {
        i++;
        sqrt = i * i;
    }
    i = i - 1;
    cout << i << endl;
    return 0;
}