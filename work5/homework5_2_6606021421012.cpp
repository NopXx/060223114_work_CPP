#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int number1, number2, number3, number4, number5;
    cout << "Enter five number : ";
    cin >> number1 >> number2 >> number3 >> number4 >> number5;
    if (number1 <= 30) {
        cout << setw(4) << number1 << " : ";
        for (int i = 1; i <= number1; i++) {
            cout << "*";
        }
        cout << endl;
    } else cout << setw(4) << number1 << " > 30" << endl;
    if (number2 <= 30) {
        cout << setw(4) << number2 << " : ";
        for (int i = 1; i <= number2; i++) {
            cout << "*";
        }
        cout << endl;
    } else cout << setw(4) << number2 << " > 30" << endl;
    if (number3 <= 30) {
        cout << setw(4) << number3 << " : ";
        for (int i = 1; i <= number3; i++) {
            cout << "*";
        }
        cout << endl;
    } else cout << setw(4) << number3 << " > 30" << endl;
    if (number4 <= 30) {
        cout << setw(4) << number4 << " : ";
        for (int i = 1; i <= number4; i++) {
            cout << "*";
        }
        cout << endl;
    } else cout << setw(4) << number4 << " > 30" << endl;
    if (number5 <= 30) {
        cout << setw(4) << number5 << " : ";
        for (int i = 1; i <= number5; i++) {
            cout << "*";
        }
        cout << endl;
    } else cout << setw(4) << number5 << " > 30" << endl;
    return 0;
}