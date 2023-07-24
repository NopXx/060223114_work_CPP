#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string binary;
    int decimal = 0;
    int power = 0;
    cout << "Enter binary number: ";
    cin >> binary;

    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }

    cout << "Decimal value of " << binary << " = " << decimal << endl;

    return 0;
}
