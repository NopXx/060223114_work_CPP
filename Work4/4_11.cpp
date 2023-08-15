#include <iostream>

using namespace std;

int main() {
    unsigned long Sum = 0L;
    int n, i = 1;
    cout << "Please enter value n to find sumation of n*n : ";
    cin >> n;
    do {
        Sum += i * i;
        i++;
    } while (i <= n);
    cout << "Sum = " << Sum << endl;
}