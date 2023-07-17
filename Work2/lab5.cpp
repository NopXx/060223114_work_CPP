#include <iostream>

using namespace std;

int main() {
    float length = 0;
    float width = 0;
    float area = 0;
    cout << "Program Calculate Area Rectangle" << endl;
    cout << "----------------" << endl;
    cout << "Enter Length : ";
    cin >> length;
    cout << "Enter Width : ";
    cin >> width;
    // 
    area = length * width;
    cout << "Area of Rectagle = " << area << endl;
    return 0;
}