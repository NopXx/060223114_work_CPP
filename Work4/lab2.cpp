#include <iostream>
#include <string>
using namespace std;

int main() {
    int numbber;
    string text;
    cout << "Enter number line : ";
    cin >> numbber;
    cout << "Enter character : ";
    cin >> text;

    if (numbber <= 20) {
    for (int i = 0; i <= numbber; i++) {
        for (int j = 0; j < i; j++) {
        cout << text;
        }
        cout << endl;
    }
    } else {
        cout << "Number > 20";
    }
    return 0;
}