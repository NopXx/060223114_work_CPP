#include <iostream>

using namespace std;

int main() {
    int gpa = 0;
    cout << "Enter your GPA: ";
    cin >> gpa;
    if (gpa > 79) {
        cout << "A";
    } else {
        if (gpa > 74) {
            cout << "B+";
        } else {
            if (gpa > 69) {
                cout << "B";
            } else {
                if (gpa > 64) {
                    cout << "C+";
                } else {
                    if (gpa > 59) {
                        cout << "C";
                    } else {
                        if (gpa > 54) {
                            cout << "D+";
                        } else {
                            if (gpa > 49) {
                                cout << "D";
                            } else {
                                cout << "F";
                            }
                        }
                    }
                }
            }
        }
    }
}