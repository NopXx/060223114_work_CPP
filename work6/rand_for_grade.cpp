#include <iostream>
#include <time.h>
#include <string>
using namespace std;

void calgrade(int score, int &c_a, int &c_bp, int &c_b, int &c_cp, int &c_c, int &c_dp, int &c_d, int &c_f);
int rand_score();
void display(int c_a, int c_bp, int c_b, int c_cp, int c_c, int c_dp, int c_d, int c_f);
void input(int &count) {
    cout << "Enter student count : ";
    cin >> count;

}
int main()
{
    int count, c_a = 0, c_bp = 0, c_b = 0, c_cp = 0, c_c = 0, c_dp = 0, c_d = 0, c_f = 0;
    
    input(count);
    srand((unsigned int)time(0));
    for (int i = 1; i <= count; i++)
    {
        calgrade(rand_score(), c_a, c_bp, c_b, c_cp, c_c, c_dp, c_d, c_f);
    }
    display(c_a, c_bp, c_b, c_cp, c_c, c_dp, c_d, c_f);
};

int rand_score()
{
    
    return rand() % 100;
}

void calgrade(int score, int &c_a, int &c_bp, int &c_b, int &c_cp, int &c_c, int &c_dp, int &c_d, int &c_f)
{
    if (score >= 80)
        c_a++;
    else if (score >= 75)
        c_bp++;
    else if (score >= 70)
        c_b++;
    else if (score >= 65)
        c_cp++;
    else if (score >= 60)
        c_c++;
    else if (score >= 55)
        c_dp++;
    else if (score >= 50)
        c_d++;
    else
        c_f++;
}

void display(int c_a, int c_bp, int c_b, int c_cp, int c_c, int c_dp, int c_d, int c_f)
{
    cout << "Grade A: " << c_a << endl;
    cout << "Grade B+: " << c_bp << endl;
    cout << "Grade B: " << c_b << endl;
    cout << "Grade C+: " << c_cp << endl;
    cout << "Grade C: " << c_c << endl;
    cout << "Grade D+: " << c_dp << endl;
    cout << "Grade D: " << c_d << endl;
    cout << "Grade F: " << c_f << endl;
}