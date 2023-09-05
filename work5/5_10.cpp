#include <iostream>
using namespace std;
void Sort3(int &V1, int &V2, int &V3);
int main()
{
    int Value1, Value2, Value3;
    cout << "Enter three integer number : ";
    cin >> Value1 >> Value2 >> Value3;
    int Output1, Output2, Output3;
    Output1 = Value1;
    Output2 = Value2;
    Output3 = Value3;
    Sort3(Output1, Output2, Output3);
    cout << Value1 << " " << Value2 << " " << Value3;
    cout << " in sorted order is ";
    cout << Output1 << " " << Output2 << " " << Output3 << endl;
    return (0);
}
void Sort3(int &V1, int &V2, int &V3)
{
    int tmp;
    if (V1 > V2)
    {
        tmp = V1;
        V1 = V2;
        V2 = tmp;
    }
    if (V1 > V3)
    {
        tmp = V1;
        V1 = V3;
        V3 = tmp;
    }
    if (V2 > V3)
    {
        tmp = V2;
        V2 = V3;
        V3 = tmp;
    }
}
