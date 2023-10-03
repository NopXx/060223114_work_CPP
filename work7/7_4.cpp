#include <iostream>
#include <string.h>
using namespace std;
char *month(int n);
int main()
{
    int n;
    bool flag = true;
    char text[10], *str;
    str = (char *)malloc(12); // alloc memory
    do
    {
        cout << "\nInput month number(0-quit) :";
        cin >> text;
        n = atoi(text);
        if (n != 0)
        {
            if (n > 0 && n < 13)
            {
                strcpy(str, month(n));
                cout << "Month name : " << str << endl;
            }
            else
                cout << "Month number error\n";
        }
        else
            flag = false;
    } while (flag);
    return (0);
}
char *month(int n)
{
    char m[12][10] = {"January", "February", "March", "April", "May",
                      "June", "July", "August", "September", "October",
                      "November", "December"};
    return (m[n - 1]);
}