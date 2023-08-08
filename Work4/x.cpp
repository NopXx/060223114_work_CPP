#include <iostream>

using namespace std;

int main() {
    float x, y;
    cout << "Enter x: ";
    cin >> x;
    if (x > 0) {
        y = ((2*x) + 4) / (x+1);
    } else if (x == 0) {
        cout << "cannot run program" << endl;
        return 0;
    } else {
        y = (-2)*((x + 10)/3);
    }
    cout << y << endl;
    return 0;
}