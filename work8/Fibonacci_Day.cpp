#include <iostream>

using namespace std;
void checkDay(int n);
int main()
{
    int n;

    cout << "Enter Number : ";
    cin >> n;
    checkDay(n);
    return 0;
}

void checkDay(int n)
{
    if (n <= 2) {
        if (n == 0) {
            cout << 0 << " is Fibonacci at F0" << endl;
        } else {
            cout << 1 << " is Fibonacci at F1 and F2" << endl;
        }
    } else {
        int fib[n + 1];
        fib[0] = 0;
        fib[1] = 1;

        for (int i = 2; i <= n + 1; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }

        for (int i = 0; i <= n + 1; i++) {
            if (fib[i] == n) {
                cout << n << " is Fibonacci at F" << i << endl;
                break;
            } else {
                if (fib[i] > n) {
                    cout << n << " is not Fibonacci" << endl;
                    break;
                }
            }
        }
    }
}