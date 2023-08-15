#include <iostream>

using namespace std;

int main() {
    int Number, Count;
    bool Flag = true;
    do {
        cout << "\nInput number factorial(0-20)? : ";
        cin >> Number;
        if ((Number > 0) && (Number <= 20)) Flag = false;
        else cout << "Number value over limit.\n";
    } while (Flag);
    if (Number >= 0) {
        long Fac = 1;
        if (Number > 0) {
            Count = 1;
            while (Count <= Number) Fac *= Count++;
            cout << "\nFactorial of " << Number << " = ";
            cout << Fac << endl;
            
        }
    }
    return 0;
}