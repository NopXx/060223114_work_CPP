// Program 4_4:
#include <iostream>
#include <string>
using namespace std;

int main() {
    int left, right;
    string Operator;
    int result;
    cout << "Please enter a simple expression ";
    cout << "(number operator number)";
    cin >> left >> Operator >> right;
    if (Operator == "+") {
        result = left + right;
    } else if (Operator == "-") {
        result = left - right;
    } else if (Operator == "*") {
        result = left * right;
    } else if (Operator == "/") {
        result = left / right;
    } else {
        cout << Operator << "is unrecognized operation";
    }
    cout << left << " " << Operator << " " << right << " = " << result << endl;
    return 0;
    

}