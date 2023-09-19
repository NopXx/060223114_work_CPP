#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x[10];
    int y[] = {10,20,30,40,50,60,70,80,90,100};
    const int array_size = 10;
    int z[array_size];

    for (int i = 0; i < 10; i++) x[i] = 0;
    for (int i = 0; i < array_size; i++) z[i] = 2 + 2 * i;

    cout << ": Subscript : Array X : Array Y : Array Z :\n";
    cout << setfill('=') << setw(43) << "=" << endl;
    cout << setfill(' ');
    for (int i = 0; i < array_size; i++) {
        cout << ": " << setw(6) << i << " :";
        cout << setw(6) << x[i] << " : ";
        cout << setw(6) << y[i] << " : ";
        cout << setw(6) << z[i] << " : ";
        cout << endl;
    }
    cout << setfill('=') << setw(43) << "=" << endl;
    return 0;
}