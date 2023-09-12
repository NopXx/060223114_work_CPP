#include <iostream>
#include <iomanip>
using namespace std;

long int factorial(int n)
{
    if (n > 1)
        return (n * factorial(n - 1));
    else
        return (1);
}

int main()
{
    cout << "\t" << "Call" << setw(20) << "Variables (n)" << setw(20) << "factorial(n-1)" << endl;
    int no = 1;
    for (int i = 5; i >= 1; i--)
    {
        cout << "\t" << no++ << setw(15) << i << setw(20) << i * factorial(i - 1) << endl;
    }
    return 0;
}