#include <iostream>

using namespace std;

int main()
{
    int egg = 0;
    int menu;
    float total_price;
    do
    {
        cout << "------------------" << endl;
        cout << "1. kai jiaw moo sub\tprice 45 bath" << endl;
        cout << "2. Pad kapao moo sub\tprice 40 bath" << endl;
        cout << "3. Pad kana moo grob\tprice 55 bath" << endl;
        cout << "4. pad pik kang moo\tprice 45 bath" << endl;
        cout << "5. moo tod ka tiaqm\tprice 45 bath" << endl;
        cout << "0. Check Out" << endl;
        cout << "select food : ";
        cin >> menu;
        switch (menu)
        {
        case 1:
            cout << "1. kai jiaw\tprice 10 bath" << endl;
            cout << "2. kai daw\tprice 5 bath" << endl;
            cout << "3. not select " << endl;
            cout << "select option : ";
            cin >> egg;
            if (egg == 1)
            {
                total_price += 45 + 10;
            }
            else if (egg == 2)
            {
                total_price += 45 + 5;
            }
            else
                total_price += 45;
            break;
        case 2:
            cout << "1. kai jiaw\tprice 10 bath" << endl;
            cout << "2. kai daw\tprice 5 bath" << endl;
            cout << "3. not select " << endl;
            cout << "select option : ";
            cin >> egg;
            if (egg == 1)
            {
                total_price += 40 + 10;
            }
            else if (egg == 2)
            {
                total_price += 40 + 5;
            }
            else
                total_price += 40;
            break;
        case 3:
            cout << "1. kai jiaw\tprice 10 bath" << endl;
            cout << "2. kai daw\tprice 5 bath" << endl;
            cout << "3. not select " << endl;
            cout << "select option : ";
            cin >> egg;
            if (egg == 1)
            {
                total_price += 55 + 10;
            }
            else if (egg == 2)
            {
                total_price += 55 + 5;
            }
            else
                total_price += 55;
            break;
        case 4:
            cout << "1. kai jiaw\tprice 10 bath" << endl;
            cout << "2. kai daw\tprice 5 bath" << endl;
            cout << "3. not select " << endl;
            cout << "select option : ";
            cin >> egg;
            if (egg == 1)
            {
                total_price += 45 + 10;
            }
            else if (egg == 2)
            {
                total_price += 45 + 5;
            }
            else
                total_price += 45;
            break;
        case 5:
            cout << "1. kai jiaw\tprice 10 bath" << endl;
            cout << "2. kai daw\tprice 5 bath" << endl;
            cout << "3. not select " << endl;
            cout << "select option : ";
            cin >> egg;
            if (egg == 1)
            {
                total_price += 45 + 10;
            }
            else if (egg == 2)
            {
                total_price += 45 + 5;
            }
            else
                total_price += 45;
            break;
        default:
            break;
        }
    } while (menu != 0);
    cout << "==================\n";
    cout << "Total: " << total_price << endl;
    return 0;
}