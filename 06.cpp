/*Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
Note : For this question, you can assume that 0 raised to the power of 0 is 1*/

#include <iostream>
using namespace std;

int main()
{
    int n, power;
    cout << "Enter number and its power" << endl;
    cin >> n;
    cin >> power;
    int result = 1;

    while (power != 0)
    {
        result *= n;
        --power;
    }

    cout << result << endl;
    return 0;
}