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
    int i, j, flag;
    int temp;
    // i = 1, j = 0 data[6] = {12, 65, 34, 2, 13, 55};
    // i = 1, j = 1 data[6] = {12, 34, 65, 2, 13, 55};
    for (i = 1; i < 6; i++)
    {
        flag = 0;
        // 0 < 5

        for (j = 0; j < 6 - i; j++)
        {
            // j = 0; 65 > 12
            // j = 1; 65 > 34
            // j = 2; 65 > 2
            if (data[j] > data[j + 1])
            {
                cout << "------------\n";
                cout << "I : " << i << endl;
                cout << "------------\n";
                cout << "J : " << j << endl;
                cout << "------------\n";
                temp = data[j];
                cout << j << " : " << data[j] << "\n";
                // j = 0; 0 = 65
                // j = 1; 65 = 65
                // j = 2; 65 = 65
                data[j] = data[j + 1];
                cout << j << " : " << data[j] << "\n";
                // j = 0; 0 > 65 = 12
                // j = 1; 65 = 34
                // j = 2; 65 = 2
                data[j + 1] = temp;
                // j = 0; 12 = 65
                // j = 1; 34 = 65
                // j = 2; 34 = 65
                cout << "------\n";
                flag = 1;
                cout <<" for array \n";
                for (int x = 0; x < 6; x++)
                {
                    cout << x << " : " << data[x] << "\n";
                }
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}