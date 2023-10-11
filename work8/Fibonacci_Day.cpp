#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter Number : ";
    cin >> n;

    if (n <= 2)
    {
        if (n == 0)
        {
            cout << 0 << " is Fibonacci at F0" << endl;
            return 0;
        }
        else
        {
            cout << 1 << " is Fibonacci at F1 and F2" << endl;
            return 0;
        } 
    }

    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n + 1; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0; i <= n + 1; i++)
    {
        if (fib[i] == n)
        {
            cout << n << " is Fibonacci at F" << i << endl;
            break;
        }
        else
        {
            if (fib[i] > n)
            {
                cout << n << " is not Fibonacci" << endl;
                break;
            }
        }
    }
    return 0;
}