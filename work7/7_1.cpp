#include <iostream>
using namespace std;
int main()
{
    int x = 5, y, z = 4;
    int *xptr, *yptr, *zptr; /* pointor to integer */
    xptr = &x;               /* assign address of x to xptr */
    yptr = &y;               /* assign address of y to yptr */
    zptr = &z;               /* assign address of z to zptr */
    y = *xptr;               /* assign value of x to y */
    cout << "\nx = " << x << " &x = " << &x;
    cout << " xptr = " << xptr << " *xptr = " << *xptr;
    cout << "\ny = " << y << " &y = " << &y;
    cout << " yptr = " << yptr << " *yptr = " << *yptr;
    cout << "\nz = " << z << " &z = " << &z;
    cout << " zptr = " << zptr << " *zptr = " << *zptr;
    x = 2 * (z + 5);     /* ordinary expression */
    y = 2 * (*zptr + 5); /* equivalent expression*/
    cout << "\nx = " << x << " y = " << y << " z = " << z << endl;
    return (0);
}