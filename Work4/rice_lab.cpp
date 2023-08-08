#include <iostream>
using namespace std;

int main() {
    float weight = 0.0;
    float moisture = 0.0;
    cout << "Please enter total weight: ";
    cin >> weight;
    cout << "Please enter rice moisture: ";
    cin >> moisture;

    float ded_weight = 0.0, new_weight = 0.0, pay = 0.0;

    if (moisture < 15) {
        ded_weight = weight * 0.0;
        new_weight = weight - ded_weight;
        pay = new_weight * 15;
    } else if (moisture >= 15.0 && moisture < 16.0) {
        ded_weight = weight * 0.01;
        new_weight = weight - ded_weight;
        pay = new_weight * 15;
    } else if (moisture >= 16.0 && moisture < 18.0) {
        ded_weight = weight * 0.02;
        new_weight = weight - ded_weight;
        pay = new_weight * 15;
    } else if (moisture >= 18.0 && moisture < 20.0) {
        ded_weight = weight * 0.05;
        new_weight = weight - ded_weight;
        pay = new_weight * 15;
    } else {
        ded_weight = weight * 0.08;
        new_weight = weight - ded_weight;
        pay = new_weight * 15;
    }

    cout << "Deducted weight: " << ded_weight << endl;
    cout << "Net weight: " << new_weight << endl;
    cout << "Payment: " << pay << endl;
    return 0;
}