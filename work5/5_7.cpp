#include <iostream>
#include <string>

using namespace std;

int main()
{
    string Str1 = "Microsoft";
    string Str2 = Str1 + "Word";
    string Str3;

    cout << "Value Str1 = " << Str1;
    cout << ", Length Str1 = " << Str1.length() << endl;
    cout << "Value Str2 = " << Str2;
    cout << ", Length Str2 = " << Str2.length() << endl;
    cout << "Value Str3 = " << Str3;
    cout << ", Length Str3 = " << Str3.length() << endl;
    cout << "Enter Str3 : ";
    cin >> Str3;
    cout << "Now Length Str3 = " << Str3.length() << endl;

    switch (Str1.compare(Str3))
    {
    case 1:
        cout << "Str1 equal Str2" << endl;
        break;
    case 0:
        cout << "Str1 more than Str2" << endl;
        break;
    case -1:
        cout << "Str1 less than Str2" << endl;
        break;
    }
    // find 's' from Str3
    cout << "\nNow find 's' in Str3" << endl;
    int pos = Str3.find("s");
    if (pos > -1)
        cout << "found 's' in Str3 at position " << pos << endl;
    else
        cout << "not found 's' in Str3." << endl;
    // delete character in Str2
    Str2.erase(5, 4);
    cout << "Aftet erase character to Str2 : " << Str2 << endl;
    // replace character in Str1
    Str1.replace(5, 4, "chip");
    cout << "Aftet replace character to Str1 : " << Str1 << endl;
    // use substr in Str1 and Str2
    cout << "\nString substr from Str1 and Str2 : ";
    cout << Str1.substr(0, 5) << Str2.substr(5, 4) << endl;
    return 0;
}