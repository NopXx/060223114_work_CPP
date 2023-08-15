#include <iostream>

using namespace std;

int main() {
    int ListSize = 5, ValueProcessed = 0;
    float ValueSum = 0;
    cout << "Please enter " << ListSize << " number " << endl;
    while (ValueProcessed < ListSize)
    {
        float Value;
        cin >> Value;
        ValueSum += Value;
        ++ValueProcessed;
    }
    float Average = ValueSum / ValueProcessed;
    cout << "Average : " << Average << endl;
    
    return 0;
}