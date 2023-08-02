#include <iostream>

using namespace std;

int main() {
    cout << "Welcome to my world!" << endl;
    cout << "Please enter 2 of your favorite integers: ";
    // เรียกใช้ตัวแปรก่อนมีการประกาศตัวแปร
    short fav1, fav2;
    cin >> fav1 >> fav2;
    cout << fav1 << " " << fav2 << endl;
    int a33 = fav1 + fav2;
    // ตั้งชื่อตัวแปรไม่ถูกต้องตามกฎ
    int b33 = abs(fav1 - fav2);
    // abs จะรับแค่ตัวแปรที่เป็นจำนวนเต็ม จึงไม่จำเป็นต้องเปลี่ยนเป็น float
    const float pi = 3.14159;
    // ไม่สามารถเปลี่ยนค่าตัวแปรได้เพราะประกาศตัวแปรเป็น const
    cout << "You will get married at age: " << a33 << endl;
    cout << "You will have " << b33 << " children." << endl;
    cout << "Good luck! Bye " << endl;
    /*
    cout << "Welcome to my world!" << endl;
    const int pi = 3.14;
    cout << "Please enter 2 of your favorite integers: ";
    // เรียกใช้ตัวแปรก่อนมีการประกาศตัวแปร
    cin >> fav1, fav2;
    short fav1, fav2;
    int 33a = fav1 + fav2;
    // ตั้งชื่อตัวแปรไม่ถูกต้องตามกฎ
    float b33 = abs(float(fav1 - fav2));
    pi = 3.14159;
    // ไม่สามารถเปลี่ยนค่าตัวแปรได้เพราะประกาศตัวแปรเป็น const
    cout << "You will get married at age: " << 33a << endl;
    cout << "You will have " << b33 << " children." << endl;
    cout << "Good luck! Bye " << endl;
    */
}