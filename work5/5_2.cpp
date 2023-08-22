#include <iostream>
#include <string>
using namespace std;

int main() {
    int IntValue;
    long LongValue;
    float FloatValue;
    string StrValue;
    cout << "Enter string number : ";
    cin >> StrValue;
    // convert string to numeric
    IntValue = atoi(StrValue.c_str());
    LongValue = atol(StrValue.c_str());
    FloatValue = atof(StrValue.c_str());
    cout << endl;
    cout << "Convert String to Numeric" << endl;
    cout << "********************************" << endl;
    cout << "Convert to Integer = " << IntValue << endl;
    cout << "Convert to Long = " << LongValue << endl;
    cout << "Convert to Float = " << FloatValue << endl;
    srand(IntValue);
    cout << "Now random integer number 10 number" << endl;
    cout << "--------------------------" << endl;
    for (int N = 1, Num; N <= 10; N++) {
        Num = rand() % 10;
        cout << Num << " " << endl;
    }
    cout << endl;
    return 0;
}