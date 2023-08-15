#include <iostream>
using namespace std;
int main(){
    int Num, Value, Sum;
    bool Flag = true;
    Num = 1;
    Sum = 0;
    do {
        cout << "Enter Value " << Num << " : ";
        cin >> Value;
        if (Value > 0) {
            Sum += Value;
            Num++;
        } else Flag = false;
    } while (Flag == true);
    if (Num > 1) {
        float Avg;
        Avg = static_cast<float>(Sum)/--Num;
        cout << "Average of data = " << Avg << endl;
    } else cout << "No data input." << endl;
    return 0;
}