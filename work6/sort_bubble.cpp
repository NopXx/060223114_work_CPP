#include <iostream>

using namespace std;
void Sortbubble(int data[]);
int main()
{
    int data[6] = {65, 12, 34, 2, 13, 55};

    cout << "Before List Array\n";
    for (int i = 0; i < 6; i++)
    {
        cout << i + 1 << " : " << data[i] << "\n";
    }
    cout << "\n loop \n";
    Sortbubble(data);

    cout << "After List Array\n";
    for (int i = 0; i < 6; i++)
    {
        cout << i + 1 << " : " << data[i] << "\n";
    }
    return 0;
}

void Sortbubble(int data[])
{
    int i, j, flag, temp;
    for (i = 1; i < 6; i++)
    {
        flag = 0;
        for (j = 0; j < 6 - i; j++)
        {
            if (data[j] > data[j + 1])
            {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}