#include <iostream>

using namespace std;

int main(){
    int number(4);
    cout << "Enter number: ";
    cin >> number;
    for (int i = 1; i <= 4; i++) {
        cout << number << "\t";
    }
}