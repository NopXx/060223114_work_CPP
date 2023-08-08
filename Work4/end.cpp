#include <iostream>
#include <string>
using namespace std;

int main() {
    int water, bread, egg, bag;
    cout << "Please enter number of water : ";
    cin >> water;
    cout << "Please enter number of bread : ";
    cin >> bread;
    cout << "Please enter number of egg : ";
    cin >> egg;

    int d_water = water / 3;
    int d_bread = bread / 4;
    int d_egg = egg / 2;
    int number_min = min(d_bread, d_water);
    bag = min(number_min, d_egg);

    
    cout << "Result of Donation bag : " << bag << endl;
    cout << "The remaining amount of donated water : " << water - (bag * 3) << endl;
    cout << "The remaining amount of donated bread : " << bread - (bag * 4) << endl;
    cout << "The remaining amount of donated boiled eggs : " << egg - (bag * 2) << endl;
    return 0;
}