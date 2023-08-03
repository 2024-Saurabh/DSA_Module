/*
Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
*/

#include <iostream>
using namespace std;

int main()
{
    double basicSalary;
    char grade;
    cin >> basicSalary >> grade;

    double hra = 0.20 * basicSalary;
    double da = 0.50 * basicSalary;
    double pf = 0.11 * basicSalary;
    double allow;
    if (grade == 'A')
    {
        allow = 1700;
    }
    else if (grade == 'B')
    {
        allow = 1500;
    }
    else
    {
        allow = 1300;
    }
    double totalSalary = basicSalary + hra + da + allow - pf;
    cout << long(totalSalary);
    return 0;
}