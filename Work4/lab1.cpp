#include <iostream>
using namespace std;

int main() {
    int gpa = 0;
    cout << "Enter your GPA: ";
    cin >> gpa;
    if ((gpa > 100) || (gpa < 0)) {
        cout << "Please enter 0 - 100";
    } else {
    if (gpa >= 90) cout << "A";
    else if (gpa >= 80) cout << "B";
    else if (gpa >= 70) cout << "C";
    else if (gpa >= 60) cout << "D";
    else cout << "F";
    }
    return 0;
}