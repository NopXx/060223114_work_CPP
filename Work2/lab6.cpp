#include <iostream>

using namespace std;

int main() {
    float pi = 3.1415;
    float radius = 0;
    float circle = 0;
    float area_circle = 0;
    cout << "Program Calculate Area Circle." << endl;
    cout << "--------------------------------" << endl;
    cout << "Circle radius (real munber) : ";
    cin >> radius;
    cout << "--------------------------------" << endl;

    circle = 2*pi*radius;
    area_circle = pi*(radius*radius);
    
    cout << "Area of circle with radius " << radius << " is " << area_circle << endl;
    cout << "Circumference is " << circle << endl;
    return 0;

}