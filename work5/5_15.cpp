#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Define prototype function
void DisplayMenu();
float Area(const float Radius);
float Area(const float Length, const float Widht);

int main()
{
    char Choice;
    bool Flag = true;
    do
    {
        DisplayMenu();
        cin >> Choice;
        if (Choice == '1')
        {
            float Radius;
            cout << "\nEnter radius : ";
            cin >> Radius;
            cout << "Area of Circle = " << fixed;
            cout << setprecision(2) << Area(Radius) << endl;
        }
        else if (Choice == '2')
        {
            float Length, Widht;
            cout << "Enter length and width : ";
            cin >> Length >> Widht;
            cout << "Area of Rectangle = " << fixed;
            cout << setprecision(2) << Area(Length, Widht);
            cout << endl;
        }
        else if (Choice == '3') {

            Flag = false;
        } else if (Choice == '4') {
            int Base, High;
            cout << "Enter base and high : ";
            cin >> Base >> High;
            cout << "Area of Triangle = " << fixed;
            cout << setprecision(2) << Area(Base, High);
            cout << endl;
        }
        else
        {
            cout << "\nYou choose out of range is ";
            cout << "not process.\n";
        }
    } while (Flag);
    cout << "\n . . . Exit Program . . .\n";
    return (0);
}

float Area(const float Radius)
{
    return (3.14159F * Radius * Radius);
}

float Area(const float Length, const float Widht)
{
    return (Length * Widht);
}

float Area(const int Base, const int High)
{
    return (0.5 * Base * High);
}

void DisplayMenu()
{
    cout << endl;
    cout << " Program Calculate Area " << endl;
    cout << " 1. Clrcle" << endl;
    cout << " 2. Rectangle" << endl;
    cout << " 3. Exit" << endl;
    cout << " 4. Triangle" << endl;
    cout << "Enter your choose number: ";
}
