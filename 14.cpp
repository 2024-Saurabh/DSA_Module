// Decimal to Binary No

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << "0";
    }
    int binaryNum[32];
    int i = 0;
    while (n != 0)
    {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binaryNum[j];
    }
    return 0;
}