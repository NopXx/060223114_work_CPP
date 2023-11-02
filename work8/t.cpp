#include <iostream>

using namespace std;

int main()
{
    int X = 4, Y = 2, Z = 9;
    if (Z <= Y)
    {
        Z = X - Z;
        Z = X % Y;
        Y = Z + X;
    }
    else
    {
        Z = Z + Y;
        Z = Z * Y;
        X = Y - X;
    }
    cout << "X = " << X << ", Y = " << Y << ", Z = " << Z << endl;
    return 0;
}