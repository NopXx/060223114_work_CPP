#include <iostream>
#include <iomanip>
using namespace std;

int chmoney(int m, int b)
{
    int chm = m / b;
    return chm;
}

int dmoney(int m, int b)
{
    int dm = m % b;
    return dm;
}

int main()
{

    int money = 0, menu = 0;
    do
    {
        cout << "------------------------\n";
        cout << "----------MENU----------" << endl;
        cout << "1: for USD to THB\n";
        cout << "2: for THB to USD\n";
        cout << "0: for Exit Program\n";
        cout << "Please input choice >> ";
        cin >> menu;
        if (menu == 1)
        {
            cout << "USD to THB\n";
            cout << "Input USD >> ";
            cin >> money;
            cout << "Exchange rate = \"35\" THB per 1 USB\n";
            int permoney = money * 35;
            cout << "Exchange = " << permoney << endl;
            cout << "cash THB \n";
            cout << "1000 = " << chmoney(permoney, 1000) << endl;
            int cmoney = dmoney(permoney, 1000);
            cout << "500 = " << chmoney(cmoney, 500) << endl;
            cmoney = dmoney(cmoney, 500);
            cout << "100 = " << chmoney(cmoney, 100) << endl;
            cmoney = dmoney(cmoney, 100);
            cout << "cannot exchange : " << cmoney << " THB\n";
        }
        else if (menu == 2)
        {
            cout << "THB to USD\n";
            cout << "Input THB >> ";
            cin >> money;
            cout << "Exchange rate = \"35\" THB per 1 USB\n";
            int permoney = money / 35;
            cout << "Exchange = " << permoney << endl;
            cout << "cash USD \n";
            cout << "100 = " << chmoney(permoney, 100) << endl;
            int cmoney = dmoney(permoney, 100);
            cout << "50 = " << chmoney(cmoney, 50) << endl;
            cmoney = dmoney(cmoney, 50);
            cout << "10 = " << chmoney(cmoney, 10) << endl;
            cmoney = dmoney(cmoney, 10);
            cout << "cannot exchange : " << cmoney << " USD\n";
        } else break;
    } while (menu != 0);
    cout << "Program Exit";
    return 0;
}
