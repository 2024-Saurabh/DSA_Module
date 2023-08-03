/* Given a number N, print sum of all even numbers from 1 to N. */
// new

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int i = 2;
    int sum = 0;
    while (i <= num)
    {
        /* code */
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i += 2;
    }
    cout << sum;

    return 0;
}