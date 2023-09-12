#include <iostream>
#include <cstring>
using namespace std;
void UpperStr(char temp[80]);
int MaxInt(int Val1, int Val2);
void Swap(int &a, int &b);
int main()
{
    char Name[80];
    int N1, N2;
    cout << "Enter two number(n1 n2): ";
    cin >> N1 >> N2;
    cout << "Enter string : ";
    cin >> Name;
    cout << endl;
    cout << "\n Before call function...";
    cout << "\n n1 = " << N1 << ", n2 = " << N2;
    cout << ", string = " << Name;
    cout << "\n Max value of n1 & n2 = " << MaxInt(N1, N2);
    cout << "\n Press key to call function...";
    getchar();
    getchar();
    swap(N1, N2);
    UpperStr(Name);
    cout << "\n After call function...";
    cout << "\n n1 = " << N1 << ", n2 = " << N2;
    cout << ", string = " << Name << endl;
    return (0);
}
int MaxInt(int Val1, int Val2)
{
    return ((Val1 > Val2) ? Val1 : Val2);
}
void Swap(int &a, int &b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
void UpperStr(char Str[80])
{
    if (strlen(Str) > 0)
        for (int index = 0; index < strlen(Str); index++)
            Str[index] = toupper(Str[index]);
}