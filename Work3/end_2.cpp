#include <iostream>

using namespace std;

int main()
{
    int X = 0, A = 5, B = 2, C = 11, D = 4, E = 3, F = 7;
    // 4.1
    X = (A - B) * F % B;
    cout << "4.1 : " << X << endl;
    // 4.2
    X += (A % D - E) + B * C;
    cout << "4.2 : " << X << endl;
    // 4.3
    X = F / (D + E - B * A) % C;
    cout << "4.3 : " << X << endl;
    // 4.4
    X += (D * A - B / C) - (A % C / D - E);
    cout << "4.4 : " << X << endl;
    // 4.5
    X -= (A - B) + C % (F - E + A);
    cout << "4.5 : " << X << endl;
    // 4.6
    X = (B + D / C) - A * F;
    cout << "4.6 : " << X << endl;
    // 4.7
    X *= (C - A % B) * (D - F / E) + (A - C);
    cout << "4.7 : " << X << endl;
    // 4.8
    X -= E % D / F + (B - C + A);
    cout << "4.8 : " << X << endl;
    // 4.9
    X = D / (C + (A - F * E)) + C;
    cout << "4.9 : " << X << endl;
    // 4.10
    X += C - (A * F) / E % (D - C) * A + B;
    cout << "4.10 : " << X << endl;
}