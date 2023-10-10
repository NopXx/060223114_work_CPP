#include <iostream>

using namespace std;

int main()
{
    int n; 
    int fib[n] = {0, 1};

    cout << "Enter Number : ";
    cin >> n;
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        cout << "Fib[" << i << "] = " << fib[i] << endl;
        if (fib[i] == n) {
            cout << n << " is " << endl;
        }
    }

    return 0;
}