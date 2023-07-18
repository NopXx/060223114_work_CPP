#include <iostream>

using namespace std;

int main() {
    float price = 0.0;
    float vat = 0.0;
    float sum_vat = 0.0;
    float sum_price = 0.0;
    cout << "Enter price : ";
    cin >> price;
    cout << "Enter vat (%) : ";
    cin >> vat;

    sum_vat = price * (vat / 100);
    sum_price = price + sum_vat;
    
    cout << "Net Price of product = " << sum_price << endl;
    return 0;

}