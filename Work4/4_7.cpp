#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;
    string name;
    cout << "Enter String : ";
    cin >> name;
    cout << "Enter Number : ";
    cin >> number;
    for (int n = 1; n <= number; n++) {
        cout << n << " : " << name << endl;
    }
    cout << endl;
    for (int n = number; n >= 1; n--) {
        cout << n << " : " << name << endl;
    }
    return 0;
}