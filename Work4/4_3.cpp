#include <iostream>
#include <string>

using namespace std;

int main() {
    char ch;
    cout << "\nEnter a character : ";
    cin >> ch;
    cout << endl;
    if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is lower character.";
    } else if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is upper character.";
    } else if (ch >= '0' && ch <= '9') {
        cout << ch << " is number.";
    } else cout << ch << " is special character.";
    return 0;
}