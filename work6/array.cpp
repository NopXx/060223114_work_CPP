#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int Minimum(int Temp[], const int Students);
int Maximum(int Temp[], const int Students);
double Average(int Temp[], const int Exam);

int main()
{
    // ประกาศตัวแปรที่ไม่สามารถเปลี่ยนค่าได้ ชื่อ MaxArray มีค่าเท่ากับ 6
    const int MaxArray = 6;
    int Score[MaxArray] = {65, 12, 34, 2, 13, 55};
    // ประกาศตัวแปรชนิด array ชื่อ Score โดยมีขนาด Array เท่ากับค่าในตัวแปร MaxArray และ ตัวแปรมีค่าเท่ากับ 65, 12, 34, 2, 13, 55
    
    // loop แสดง index ของ array และ แสดงข้อมูลของที่อยู่ใน index นั้น
    for (int r = 0; r < MaxArray; r++)
    {
        cout << r << " : " << Score[r];
        cout << endl;
    }
    // เรียกใช้ fn Minimum แล้วส่ง Array ในตัวแปร Score 
    cout << "\nLowest score : " << Minimum(Score, MaxArray);
    cout << endl;
    cout << "Highest score : " << Maximum(Score, MaxArray);
    cout << endl;
    cout << endl;

    cout << "Average of student is ";
    cout << fixed << setprecision(2) << Average(Score, MaxArray);
    cout << endl;


    return 0;
}

int Minimum(int Temp[], const int MaxArray)
{
    int LowScore = 100;
    for (int r = 0; r < MaxArray; r++)
    {
        if (Temp[r] < LowScore)
        {
            LowScore = Temp[r];
        }
    }
    return LowScore;
}

int Maximum(int Temp[], const int MaxArray)
{
    int HighScore = 0;
    for (int r = 0; r < MaxArray; r++)
    {

        if (Temp[r] > HighScore)
        {
            HighScore = Temp[r];
        }
    }
    return HighScore;
}

double Average(int Temp[], int MaxArray)
{
    int Total = 0;
    for (int r = 0; r < MaxArray; r++)
    {
        Total += Temp[r];
    }
    return (double)Total / MaxArray;
}