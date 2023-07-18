#include <iostream>

using namespace std;

int main()
{
    int X = 0, A = 10, B = 7, C = 3, D = 6, E = 1, F = 2;
    // 3.1
    X = A / F - C * B + E;
    cout << "3.1 : " << X << endl;
    // 3.2
    X = B + (C * E) - (F % A);
    cout << "3.2 : " << X << endl;
    // 3.3
    X = E * B * D - F % A;
    cout << "3.3 : " << X << endl;
    // 3.4
    X = C % F + A + B / E;
    cout << "3.4 : " << X << endl;
    // 3.5
    X = A - B * E / B % D;
    cout << "3.5 : " << X << endl;
    // 3.6
    X = F * A - D + E * D;
    cout << "3.6 : " << X << endl;
    // 3.7
    X = A * D - B + B * D;
    cout << "3.7 : " << X << endl;
    // 3.8
    X = D / E % A + F - D;
    cout << "3.8 : " << X << endl;
    // 3.9
    X = E % A - B * C - A;
    cout << "3.9 : " << X << endl;
    // 3.10
    X = B + F - B % E * F;
    cout << "3.10 : " << X << endl;
    return 0;
}