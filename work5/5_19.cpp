#include <iostream>
using namespace std;
template <class T, class P>
T Average(P a[], int Max);
int main()
{
    int intData[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Average of data(integer) : ";
    cout << Average<float, int>(intData, 10) << endl;
    double doubleData[] = {0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    cout << "Average of data(double) : ";
    cout << Average<double, double>(doubleData, 11) << endl;
    return (0);
}
template <class T, class P>
T Average(P a[], int Max)
{
    T sum = 0.0;
    for (int n = 0; n < Max; n++)
        sum += a[n];
    return (sum / Max);
}
