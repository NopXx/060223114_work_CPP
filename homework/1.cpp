#include <iostream>

using namespace std;

int main() {

    int pens, pencils, rulers;
    cout << "Enter number of pen : ";
    cin >> pens;
    cout << "Enter number of pencil : ";
    cin >> pencils;
    cout << "Enter number of ruler : ";
    cin >> rulers;

    int total_price = (pens * 5) + (pencils * 2) + (rulers * 8);
    if ((total_price < 300) && (pens % 2 == 0) && (rulers % 2 == 0) && (pencils % 2 == 0)) {
        cout << "Oder is OK" << endl;
        cout << "Total Price = " << total_price << endl;
    }  else if ((total_price < 200) && (rulers % 2 == 0) && (pencils % 2 == 0)) {
        cout << "Oder is OK" << endl;
        cout << "Total Price = " << total_price << endl;
    } else if ((total_price < 100) && (rulers % 2 == 0)) {
        cout << "Oder is OK" << endl;
        cout << "Total Price = " << total_price << endl;
    } else {
        cout << "Invalid Oder" << endl;
    }

    return 0;

}