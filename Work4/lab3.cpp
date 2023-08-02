#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    cout << "Enter message : ";
    getline(cin, text);

    int upper = 0, lower = 0, number = 0, special = 0, spaces = 0;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            lower++;
        } else if (text[i] >= 'A' && text[i] <= 'Z') {
            upper++;
        } else if (text[i] >= '0' && text[i] <= '9') {
            number++;
        } else if (text[i] == ' ') {
            spaces++;
        } else special++;
    }
    cout << "Your message have " << upper << " uppers character.\n"; 
    cout << "Your message have " << lower << " lowers character.\n"; 
    cout << "Your message have " << number << " number character.\n"; 
    cout << "Your message have " << special << " special character.\n"; 
    cout << "Your message have " << spaces << " spaces character."; 
    
    return 0;
}