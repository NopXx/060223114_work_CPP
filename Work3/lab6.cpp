#include <iostream>

using namespace std;

int main(){
    int start_kilometer, end_kilometer, distance, hour, minute, second;
    cout << "Data inputs are integer!."<< endl;
    cout << "Enter start kilometer : ";
    cin >> start_kilometer;
    cout << "Enter end kilometer : ";
    cin >> end_kilometer;
    cout << "Enter time used(hour minute second) : ";
    cin >> hour >> minute >> second;
    cout << endl;

    distance = end_kilometer - start_kilometer;
    double time = hour + (minute / 60.0) + (second / 3600.0);
    double avg = distance / time;

    cout << "Car treaveled " << distance << " kilometers in " << hour << " hrs " << minute << " min " << second << " sec." << endl;
    cout << "Average velocity was "<< avg <<" kph." << endl;
    return 0;
}