#include <iostream>
#include <string>
#include <algorithm>
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
    int number_min2 = min(number_min, d_egg);

    
    cout << "Result of Donation bag : " << number_min2 << endl;
    cout << "The remaining amount of donated water : " << water - (number_min2 * 3) << endl;
    cout << "The remaining amount of donated bread : " << bread - (number_min2 * 4) << endl;
    cout << "The remaining amount of donated boiled eggs : " << egg - (number_min2 * 2) << endl;
    return 0;
}