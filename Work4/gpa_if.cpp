#include <iostream>

using namespace std;

int main() {
    int gpa = 0;
    cout << "Enter your GPA: ";
    cin >> gpa;
    if ((gpa <= 100) && (gpa >= 80)) cout << "A"; // 4
    if ((gpa <= 79) && (gpa >= 75)) cout << "B+"; // 3.5
    if ((gpa <= 74) && (gpa >= 70)) cout << "B"; // 3
    if ((gpa <= 69) && (gpa >= 65)) cout << "C+"; // 2.5
    if ((gpa <= 64) && (gpa >= 60)) cout << "C"; // 2
    if ((gpa <= 59) && (gpa >= 55)) cout << "D+"; 
    if ((gpa <= 54) && (gpa >= 50)) cout << "D"; 
    if (gpa <= 49) cout << "F";
    return 0;
}