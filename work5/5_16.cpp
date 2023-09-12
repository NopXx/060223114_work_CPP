#include <iostream>
using namespace std;
unsigned long Factorial1(int Number);
unsigned long Factorial2(int Number);
unsigned long Factorial3(int n, int i);
int main()
{
    int Value;
    cout << "Enter integer number(0-20) : ";
    cin >> Value;
    unsigned long Fac;
    Fac = Factorial1(Value);
    cout << "Factorial1 of " << Value << " is ";
    cout << Fac << endl;
    Fac = Factorial2(Value);
    cout << "Factorial2 of " << Value << " is ";
    cout << Fac << endl;
    cout << "Factorial3 of " << Value << " is ";
    cout << Factorial3(Value, 1) << endl;
    return (0);
}
// This function use loop
unsigned long Factorial1(int Number)
{
    unsigned long Fac = 1;
    for (int N = 1; N <= Number; N++)
        Fac *= N;
    return (Fac);
}
// This function use recursion function
unsigned long Factorial2(int Number)
{
    // unsigned long Fac = 1;
    if (Number > 1)
        return (Number * Factorial2(Number - 1));
    else
        return (1);
}

unsigned long int Factorial3(int n, int i) {
    if (i < n) {
        return i * Factorial3(n, i + 1);
    } else return n;
}