#include <iostream>

using namespace std;
void ModifyArray(int Temp[]);
void ModifyElement(int Temp);

int main()
{
    int Data[] = {1, 2, 3, 4, 5};
    cout << "Effects of passing entrie array pass-by-reference.\n";
    cout << "Original array's value : ";
    for (int i = 0; i < 5; i++)
    {
        cout << Data[i] << " ";
    }
    cout << endl;
    ModifyArray(Data);
    cout << "Modified array's value : ";
    for (int i = 0; i < 5; i++)
    {
        cout << Data[i] << " ";
    }
    cout << endl;
    cout << "Effects of passing array element pass-by-value.\n";
    cout << "";
    for (int i = 0; i < 5; i++)
    {
    }
    return 0;
}