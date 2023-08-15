#include <iostream>

using namespace std;

int main() {
    cout << "Display sqaure of number 1 to 10.\n";
    cout << "==================================\n";
    cout << "\tX\tX^2\n";
    cout << "==================================\n";
    int X = 1;
    while (X <= 10)
    {
        cout << "\t" << X << "\t" << X*X << endl;
        X++;
    }
    return 0;
}