// WAP to count lower character, digit (0-9) and special character like \n, \t, ' ' if terminating condition is $

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin.get(ch);
    int lower = 0, digit = 0, special = 0;
    for (int i = 0; ch != '$'; i++)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            lower++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digit++;
        }
        else if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            special++;
        }
        cin.get(ch);
    }

    cout << lower << ' ' << digit << ' ' << special << endl;
}