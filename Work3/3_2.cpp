#include <iostream>

using namespace std;

int main() {
    float x;
    cout << "Enter value X : ";
    cin >> x;
    float Result(0);
    Result = x * x * x + 3 * x - 10;
    cout << "\nResult of X*X*X + 3*X - 10 = " << Result << endl;
    return 0;
}