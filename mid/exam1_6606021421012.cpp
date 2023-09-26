#include <iostream>
#include <iomanip>

using namespace std;
void display_select();
void menu_noodles();
void menu_drinks();
int main() {
    int menu = 0, menu_select = 0, total_price = 0, cash = 0;
    do {
        display_select();
        cin >> menu;
        switch (menu)
        {
        case 1:
            menu_noodles();
            cin >> menu_select;
            switch (menu_select)
            {
            case 1:
                cout << "Add Beef Noodle 75 Bath\n";
                cout << "-------\n";
                total_price += 75;
                break;
            case 2:
                cout << "Add Pork Noodle 65 Bath\n";
                cout << "-------\n";
                total_price += 65;
                break;
            case 3:
                cout << "Add Chicken Noodle 60 Bath\n";
                cout << "-------\n";
                total_price += 60;
                break;
            case 4:
                cout << "Add Rice 10 Bath\n";
                cout << "-------\n";
                total_price += 10;
                break;
            default:
                cout << "Error Select\n";
                cout << "-------\n";
                break;
            }
            break;
        case 2:
            menu_drinks();
            cin >> menu_select;
            switch (menu_select)
            {
            case 1:
                cout << "Add Coffee 55 Bath\n";
                cout << "-------\n";
                total_price += 55;
                break;
            case 2:
                cout << "Add Matcha Green Tea Latte 65 Bath\n";
                cout << "-------\n";
                total_price += 65;
                break;
            case 3:
                cout << "Add Green tea 35 Bath\n";
                cout << "-------\n";
                total_price += 35;
                break;
            case 4:
                cout << "Add Coca Cola 35 Bath\n";
                cout << "-------\n";
                total_price += 35;
                break;
            case 5:
                cout << "Add Drinking water 15 Bath\n";
                cout << "-------\n";
                total_price += 15;
                break;
            default:
                cout << "Error Select\n";
                break;
            }
            break;
        case 3:
            cout << setfill('-')<< setw(18) << " Check Bill " << setw(5) << ""<< endl;
            cout << setfill(' ');
            cout << "Total = " << total_price << " Bath\n";
            do {
                cout << "Received Cash : ";
                cin >> cash;
            } while (total_price > cash);
            cout << "Change = " << cash - total_price << " Bath\n";
            cout << "-------\n";
            total_price = 0;
            break;
        case 0:
            cout << "Program Exit";
            break;
        default:
            cout << "Error Select\n";
            break;
        }
    } while (menu != 0);
    return 0;
};

void display_select() {
    cout << setfill('-')<< setw(11) << " Menu " << setw(5) << ""<< endl;
    cout << setfill(' ');
    cout << "1. For Select Noodles\n"; 
    cout << "2. For Select Drinks\n"; 
    cout << "3. For Check Bill\n"; 
    cout << "0. For Exit Program\n"; 
    cout << "Please input Menu : "; 
}

void menu_noodles() {
    cout << setfill('-')<< setw(19) << " Noodles Menu " << setw(5) << ""<< endl;
    cout << setfill(' ');
    cout << "1. Beef Noodle 75 Bath\n";
    cout << "2. Pork Noodle 65 Bath\n";
    cout << "3. Chicken Noodle 60 Bath\n";
    cout << "4. Rice 10 Bath\n";
    cout << "Please Select Noodle : ";
}

void menu_drinks() {
    cout << setfill('-')<< setw(18) << " Drinks Menu " << setw(5) << ""<< endl;
    cout << setfill(' ');
    cout << "1. Coffee 55 Bath\n";
    cout << "2. Matcha Green Tea Latte 65 Bath\n";
    cout << "3. Green tea 35 Bath\n";
    cout << "4. Coca Cola 35 Bath\n";
    cout << "5. Drinking water 15 Bath\n";
    cout << "Please Select Drink : ";
}