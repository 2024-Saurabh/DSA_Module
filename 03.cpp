/*Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.*/

#include <iostream>
using namespace std;

int main()
{
    int startF, endF, stepSize;
    cout << "Enter input " << endl;
    cin >> startF >> endF >> stepSize;

    int F = startF;
    while (F <= endF)
    {
        int C = (5.0 / 9) * (F - 32);
        cout << "Output Result" << endl;
        cout << F << " " << C << endl;
        F = F + stepSize;
    }
    return 0;
}