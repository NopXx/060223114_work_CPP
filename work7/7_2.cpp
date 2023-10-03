#include <iostream>
using namespace std;
int main()
{
    int *iptr, i;
    char *cptr, c;
    float *fptr, f;
    double *dptr, d;
    iptr = &i;
    cptr = &c;
    fptr = &f;
    dptr = &d;
    cout << "Size of integer pointer is " << sizeof(iptr) << endl;
    cout << "Size of char pointer is " << sizeof(cptr) << endl;
    cout << "Size of float pointer is " << sizeof(fptr) << endl;
    cout << "Size of double pointer is " << sizeof(dptr) << endl;
    cout << "Size of *integer pointer is " << sizeof(*iptr) << endl;
    cout << "Size of *char pointer is " << sizeof(*cptr) << endl;
    cout << "Size of *float pointer is " << sizeof(*fptr) << endl;
    cout << "Size of *double pointer is " << sizeof(*dptr) << endl;
    return (0);
}