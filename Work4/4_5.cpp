// program 4_5
#include <iostream>
#include <string>
using namespace std;

int main() {
    char Choice;
    float Area;
    cout << "Program Calculate Area" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choose number: ";
    cin >> Choice;
    switch (Choice)
    {
    case 1:
        float Radius;
        cout << "\nEnter Radius: ";
        cin >> Radius;
        Area = 3.14159F * Radius * Radius;
        cout << "\nArea of Circle: " << Area << endl;
        break;
    case 2:
        float Length,Width;
        cout << "\nEnter Length and Width : ";
        cin >> Length >> Width;
        Area = Length * Width;
        cout << "\nArea of Rectangle: " << Area << endl;
        break;
    case 3:
        cout << "\n....Exit Program" << endl;
        break;
    default:
        cout << "You choose out range is not process.";
        break;
    }
}