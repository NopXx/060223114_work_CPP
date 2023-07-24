#include <iostream>
#include <string>
using namespace std;

int main(){
    int number;

    // Input the number
    std::cout << "Enter number: ";
    std::cin >> number;

    string number_string = to_string(number);

    for (size_t i = 0; i < number_string.length(); i++) {
        cout << number_string[i] << "    ";
    }

    return 0;
}