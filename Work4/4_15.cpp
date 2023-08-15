#include <iostream>
#include <string>
using namespace std;
int main() {
    string Str;
    cout << "Enter String : ";
    getline(cin, Str, '\n');
    // cin >> Str;
    cout << endl;
    cout << "Your string enter : " << Str << endl;
    cout << "Length of string : " << Str.length() << endl;
    for (int n = 0; n < Str.length(); n++) {
        cout << "Position : " << n << " = " << Str[n] << endl;
    }
    return 0;
}