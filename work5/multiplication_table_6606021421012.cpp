// นพรัตน์ คำโกแก้ว 6606021421012
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int number = 0;
    do {
        cout << "Enter number : ";
        cin >> number;
    } while (number <= 1 || number > 49);

    for(int i = number; i < number + 3; ) {
            cout << ": "<< i << "\t" << setw(16);
            i++;
        }
    cout << setw(0) << endl;
    cout << "+" << setfill('=') << setw(70) << "+" << endl;
    cout << setfill(' ');
    for(int num = 1; num <= 12;) {
        for(int i = number; i < number + 3; i++) {
            cout << ": " << i << " * " << num << " = " << i * num <<"\t" << setw(8);
        }
        cout << setw(0) << endl;
        num++;
    }
    return 0;
}