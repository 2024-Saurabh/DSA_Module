/*The n-th term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
    F(n) = F(n - 1) + F(n - 2),
    Where, F(1) = 1, F(2) = 1


Provided 'n' you have to find out the n-th Fibonacci Number. Handle edges cases like when 'n' = 1 or 'n' = 2 by using conditionals like if else and return what's expected.*/

#include <iostream>
using namespace std;

int main()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    cin >> n;

    if (n == 0 || n == 1)
    {
        nextTerm = n;
        cout << nextTerm << endl;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        cout << nextTerm << endl;
    }

        return 0;
}