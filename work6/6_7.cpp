#include <iostream>
#include <iomanip>
using namespace std;
void DisplayArray(int Temp[][4]);
int main()
{
    int Data[3][4];
    for (int r = 0; r < 3; r++)
        for (int c = 0; c < 4; c++)
            Data[r][c] = (r + 1) * (c + 1);
    cout << "Values in the array by row are :" << endl;
    DisplayArray(Data);
    return (0);
}
void DisplayArray(int Temp[][4])
{
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 4; c++)
            cout << setw(5) << Temp[r][c];
        cout << endl;
    }
}