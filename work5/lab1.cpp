#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x;
    cout << "Enter X : ";
    cin >> x;
    cout << "(sin X)^2 x (cos X)^2 = " << pow(sin(x), 2) * pow(cos(x), 2) << endl;
    cout << "3: " << log(pow(x, 2)/1-x)/pow(x, 5 + x) << endl;
    return 0;
}
