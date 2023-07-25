#include <iostream>
using namespace std;

int main() {
    int A, B;
    cout << "Enter value A and B : ";
    cin >> A >> B;
    if (A == B) cout << "A and B value are equal" << endl;
    if (A > B) cout << "A value > value B" << endl;
    if (A < B) cout << "A value < value B" << endl; 
    return 0;
}