#include <iostream>
#include <iomanip>
using namespace std;

float input_score() {
    float score = 0.0;
    cout << "Enter Score : ";
    cin >> score;
    return score;
}

void calgrade(float score) {
    if (score >= 80) cout << "Grade A";
    else if (score >= 75) cout << "Grade B+";
    else if (score >= 70) cout << "Grade B";
    else if (score >= 65) cout << "Grade C+";
    else if (score >= 60) cout << "Grade C";
    else if (score >= 55) cout << "Grade D+";
    else if (score >= 50) cout << "Grade D";
    else cout << "Grade F";
}

void display() {
    cout << "Grade Calculator" << endl;
    for (int i = 1; i <= 20; i++) {
        cout << "" << setfill('=') << setw(24) << "" << endl;
        cout << setw(6) << "" << setfill('=') << " Student " << i << " " << setw(6) << "" << endl;
        setfill(' ');
        calgrade(input_score());;
        cout << endl;
    }
}


int main() {
    display();
    return 0;
}