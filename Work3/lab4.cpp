#include <iostream>
#include <string>
using namespace std;

int main(){
    int number;

    cout << "Enter number: ";
    cin >> number;

    string number_string = to_string(number);

    for (int i = 0; i < number_string.length(); i++) {
        cout << number_string[i] << "    ";
    }

    return 0;
}