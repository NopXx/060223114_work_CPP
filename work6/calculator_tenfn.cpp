#include <iostream>
#include <cmath>

using namespace std;
// 1
void add(float num1, float num2);
// 2
void subtract(float num1, float num2);
// 3
void multiply(float num1, float num2);
// 4
void divide(float num1, float num2);
// 5
void mod(int num1, int num2);
// 6
void power(float num1, float num2);
// 7
void circle(float num1);
// 8
int factorial(int num1);
// 9
void ftoc(float num1);
// 10
void CheckPrime(int number);
// display menu
void display_menu() {
    cout << "Calculator 10 Function\n";
    cout << "1. Add \n";
    cout << "2. Subtract \n";
    cout << "3. Multiply \n";
    cout << "4. Divide \n";
    cout << "5. Mod \n";
    cout << "6. Power \n";
    cout << "7. Circle Area \n";
    cout << "8. Factorial \n";
    cout << "9. Fahrenheit to Celsius \n";
    cout << "10. Check PrimeNumber \n";
    cout << "0. Exit Program \n";
    cout << "Please enter options: ";
}

void Process(int menu, float n1, float n2) {
    switch (menu) {
            case 1:
                cout << "Input Number 1 : ";
                cin >> n1;
                cout << "Input Number 2 : ";
                cin >> n2;
                add(n1, n2);
                break;
            case 2:
                cout << "Input Number 1 : ";
                cin >> n1;
                cout << "Input Number 2 : ";
                cin >> n2;
                subtract(n1, n2);
                break;
            case 3:
                cout << "Input Number 1 : ";
                cin >> n1;
                cout << "Input Number 2 : ";
                cin >> n2;
                multiply(n1, n2);
                break;
            case 4:
                cout << "Input Number 1 : ";
                cin >> n1;
                cout << "Input Number 2 : ";
                cin >> n2;
                divide(n1, n2);
                break;
            case 5:
                int n1, n2;
                cout << "Input Number 1 : ";
                cin >> n1;
                cout << "Input Number 2 : ";
                cin >> n2;
                mod(n1, n2);
                break;
            case 6:
                cout << "Input Number 1 : ";
                cin >> n1;
                cout << "Input Number 2 : ";
                cin >> n2;
                power(n1, n2);
                break;
            case 7:
                cout << "Enter Radius : ";
                cin >> n1;
                circle(n1);
                break;
            case 8:
                cout << "Input Number : ";
                cin >> n1;
                cout << n1 << " factorial = ";
                cout << factorial(n1);
                cout << endl;
                break;
            case 9:
                cout << "Input Fahrenheit : ";
                cin >> n1;
                ftoc(n1);
                break;
            case 10:
                cout << "Input Number : ";
                cin >> n1;
                CheckPrime(n1);
                break;
            case 0:
                cout << "Exiting...";
                break;
            default:
                cout << "Unknown Options";
                break;

        }
}

int main() {
    int menu = 0;
    float n1, n2;
    do {
        display_menu();
        cin >> menu;
        Process(menu, n1, n2);
    } while (menu != 0);
    return 0;
}

// 1
void add(float num1, float num2) {
    cout << "Result \n";
    cout << num1 << " + " << num2 << " = " << num1+num2;
    cout << endl;
}
// 2
void subtract(float num1, float num2) {
    cout << "Result \n";
    cout << num1 << " - " << num2 << " = " << num1-num2;
    cout << endl;
}
// 3
void multiply(float num1, float num2) {
    cout << "Result \n";
    cout << num1 << " * " << num2 << " = " << num1 * num2;
    cout << endl;
}
// 4
void divide(float num1, float num2) {
    cout << "Result \n";
    cout << num1 << " / " << num2 << " = " << num1 / num2;
    cout << endl;
}
// 5
void mod(int num1, int num2) {
    cout << "Result \n";
    cout << num1 << " mod " << num2 << " = " << num1 % num2;
    cout << endl;
}
// 6
void power(float num1, float num2) {
    cout << "Result \n";
    cout << num1 << " ^ " << num2 << " = " << pow(num1,num2);
    cout << endl;
}
// 7
void circle(float num1) {
    cout << "Area of Circle ";
    cout << 3.14*(num1*num1) << endl;
    cout << endl;
}
// 8
int factorial(int num1) {
    long fac = 1;
    for (int i = 1; i <= num1; i++) fac *= i;
    return fac;
}
// 9
void ftoc(float num1) {
    cout << "Result \n";
    float c = (num1 - 32) * 5/9;
    cout << "Celsius : " << c << endl;

}
// 10
void CheckPrime(int number)
{
    if ((number <= 1 || number % 2 == 0 || number % 3 == 0 || number % 5 == 0 || number % 7 == 0) 
        && (number != 2 && number != 3 && number != 5 && number != 7))
    {
        cout << "Number Is Not Prine" << endl;
    }
    else
    {
        cout << "Number Is Prine" << endl;
    }
}