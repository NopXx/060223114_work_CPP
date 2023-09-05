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


int main() {
    for (int i = 0; i < 20; i++) {
        cout << "" << setfill('=') << setw(19) << "" << endl;
        cout << setw(4) << "" << setfill('=') << " Student " << (i + 1) << " " << setw(4) << "" << endl;
        setfill(' ');
        calgrade(input_score());
        cout << endl;
    }
    return 0;
}