#include <iostream>
#include <iomanip>
using namespace std;

void Recursive(float money, int year, float rate);

int main()
{
    float money, rate;
    int year;
    cout << "Enter Money Year Rate : ";
    cin >> money >> year >> rate;
    Recursive(money, year, rate);
    return 0;
}

void Recursive(float money, int year, float rate)
{
    cout << "|" << setw(10) << "Year" << setw(7) << "|" << setw(10) << "Money" << setw(7) << "|" << setw(10) << "Rate" << setw(7) << "|" << setw(10) << "Total" << setw(7) << "|\n";
    for (int i = 1; i <= year; i++)
    {
        float rate_pay = money * (rate / 100);
        cout << "|" << setw(10) << i << setw(7) << "|" << setw(10) << money << setw(7) << "|" << setw(10) << rate_pay;
        money += rate_pay;
        cout << setw(7) << "|" << setw(10) << money << setw(7) << "|\n";
    }
}