#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    float Raduis, Angle;
    const int WIDTH = 9;
    cout << "+" << setfill('=') << setw(44) << "+" << endl;
    cout << ": Angle    : Sine     : Cosine   : Tangent : " << endl;
    cout << "+" << setfill('=') << setw(44) << "+" << endl;
    cout << setfill(' ');
    for (Angle = 0.0; Angle <= 360.0; Angle += 20) {
        Raduis = (Angle > 0.0) ? (180.0f*3.14f)/Angle : 0.0;
        cout << ":" << setw(WIDTH) << fixed << setprecision(2) << Angle;
        cout << " :" << setw(WIDTH) << setprecision(4) << sin(Raduis);
        cout << " :" << setw(WIDTH) << cos(Raduis);
        cout << " :" << setw(WIDTH) << tan(Raduis);
        cout << endl;
    }
    cout << "+" << setfill('=') << setw(44) << "+" << endl;
    return 0;
}