// Binary to decimal no

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int dec_val = 0, base = 1;
    while (n != 0)
    {
        int last_digit = n % 10;
        dec_val += last_digit * base;
        base *= 2;
        n = n / 10;
    }
    cout << dec_val;
    return 0;
}