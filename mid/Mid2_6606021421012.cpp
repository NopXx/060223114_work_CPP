#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int day = 0, water, suga, green, bee, fowver;
    int d_water = 0, d_suga = 0, d_green = 0, d_bee = 0, d_fowver = 0, total_maxt = 0, total_maxog = 0;
    do
    {
        cout << "--------------------------------------\n";
        cout << "-------------- Day " << day + 1 << " -----------------\n";
        cout << "------------ Supplier ---------------- \n";
        // ป้อนน้ำเปล่า หน่วยเป็น มิลลิลิตร
        cout << "Enter water (ml) : ";
        cin >> water;
        // ป้อนน้ำตาล หน่วยเป็น กิโลกรัม
        cout << "Enter Suga (g) : ";
        cin >> suga;
        // ป้อนใบชาเขียว หน่วยเป็น กรัม
        cout << "Enter Green teen (g) : ";
        cin >> green;
        // ป้อนน้ำผึ้ง หน่วยเป็น กรัม
        cout << "Enter Bee (g) : ";
        cin >> bee;
        // ป้อนดอกเก็กฮวย หน่วยเป็น กรัม
        cout << "Enter Fowver (g) : ";
        cin >> fowver;

        // หาชาเขียวรสเก็กฮวย
        int tod_fower = (fowver + d_fowver) / 20;
        int tod_bee = (bee + d_bee) / 75;
        int tod_green = (green + d_green) / 25;
        int tod_water = (water + d_water) / 200;
        int maxt = min(tod_bee, min(tod_fower, min(tod_green, tod_water)));
        total_maxt = total_maxt + maxt;
        d_fowver += (fowver + d_fowver) - (20 * maxt);
        d_bee += (bee + d_bee) - (75 * maxt);
        d_green += (green + d_green) - (25 * maxt);
        d_water += (water + d_water) - (200 * maxt);
        d_suga += (suga + d_suga);
        // หาชาเขียวต้นรสตำรับ
        if (d_water >= 200 && d_green >= 25)
        {
            int ogd_green = d_green / 25;
            int ogd_water = d_water / 200;
            int ogd_suga = d_suga / 50;
            int maxog = min(ogd_green, min(ogd_water, ogd_suga));
            total_maxog = total_maxog + maxog;
            d_suga = d_suga - (50 * maxog);
            d_green = d_green - (25 * maxog);
            d_water = d_water - (200 * maxog);
        }
        //
        cout << "--------------------------------------\n";
        cout << "---------------- Day " << day + 1 << " --------------\n";
        cout << "Green Teen OG : " << total_maxog << endl;
        cout << "Green Teen Fowver : " << total_maxt << endl;
        cout << "--------------------------------------\n";
        cout << "Water : " << d_water << endl;
        cout << "Suga : " << d_suga << endl;
        cout << "Green Teen : " << d_green << endl;
        cout << "Bee : " << d_bee << endl;
        cout << "Fowver : " << d_fowver << endl;
        day++;
    } while (day != 5);
    return 0;
}