#include <iostream>

using namespace std;

int main(){
    float f = 0.0;
    cout << "Fahrenheit : ";
    cin >> f;
    float c = (f - 32) * 5/9;
    cout << "Celsius : " << c << endl;
    return 0;
}