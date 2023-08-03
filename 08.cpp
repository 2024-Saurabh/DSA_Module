// Print all the prime no lying between 2 to num
// input given by usr is num

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 2; i <= num; i++)
    {
        int count = 0;
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << i << endl;
        }
    }

    return 0;
}