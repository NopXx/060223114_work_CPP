#include <iostream>

using namespace std;

int main() {
    int x,n;
    float y = 0.0;
    cout << "Input x and n : ";
    cin >> x >> n;

    for (int i = 1; i <= n; i++) {
            y += (float) 1.0/(i * x);
            cout << y << endl;
    }
    cout << "y = " << y << endl;
}