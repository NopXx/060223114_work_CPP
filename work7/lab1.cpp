#include <iostream>
#include <string>
#include <vector>
using namespace std;

string full_month(int n);
string short_month(int n);
string Format_one(string date);
string Format_two(string date);
void stop_day(string date);
string ps_stop_day(string date, string day_input, string month_input);

int main()
{
    string date, format;

    cout << "Input Date(dd/mm/yyyy) : ";
    cin >> date;

    cout << "Format 1: " << Format_one(date) << endl;
    cout << "Format 2: " << Format_two(date) << endl;
    stop_day(date);

    return 0;
}

string short_month(int n)
{
    string month[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    return month[n - 1];
}

string full_month(int n)
{
    string month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    return month[n - 1];
}

void stop_day(string date)
{
    string new_date[3], format;
    int index = 0;
    for (int i = 0; i < date.length(); i++)
    {
        if (date[i] != '/')
        {
            new_date[index] += date[i];
        }
        else
        {
            index++;
        }
    }
    cout << (ps_stop_day(date, new_date[0], new_date[1]) != "" ? 
        ps_stop_day(date, new_date[0], new_date[1]) : 
        new_date[0] + " " + short_month(stoi(new_date[1])) + " is not Holiday");
}

string ps_stop_day(string date, string day_input, string month_input)
{
    string result = "";
    string stop_day[][12] = {
        {"01/New Year Holiday", "02/new Year Day Substitution Holiday"},
        {},
        {"06/Magha Bucha Day"},
        {"06/Chakri Memorial Day", "13/Songkran Festival", "14/Songkran Festival", "15/Songkran Festival", "17/Songkran Festival Substitution Holiday"},
        {"04/Coronation Day", "05/Special public holidays", "17/Royal Ploughing Ceremony"},
        {"03/Visakha Bucha Day And king's Birthday", "05/Visakha Bucha Day And king's Birthday substitution day"},
        {"28/king's Birthday"},
        {"01/Asalahabuja day", "02/Buddhist Lent day", "12/Mother's day", "14/Mother's day substitution day"},
        {},
        {"13/King Naresuan Day", "23/Chulalongkorn Day"},
        {},
        {"05/Father's Day", "10/Constitution Day", "11/Constitution Day substitution day", "31/End Year Day"}};
    int month = stoi(month_input);
    string day[] = {};
    int index_day = 0;
    for (int i = 0; i < 12; i++)
    {
        if (!stop_day[month - 1][i].empty())
        {
            day[index_day] = stop_day[month - 1][i];
            index_day++;
        }
    }
    string temp_day[2];
    int index_j = 0;
    for (int j = 0; j < index_day; j++)
    {
        string temp = day[j];
        for (int n_str = 0; n_str < temp.length(); n_str++)
        {

            if (temp[n_str] != '/')
            {
                temp_day[index_j] += temp[n_str];
            }
            else
            {
                index_j++;
            }
        }
        if (stoi(temp_day[0]) == stoi(day_input))
        {

            result = temp_day[0] + " " + short_month(month) + " is " + temp_day[1];
            break;
        }
        else
        {
            index_j = 0;
            temp_day[0] = "";
            temp_day[1] = "";
        }
    }
    return result;
}

string Format_one(string date)
{
    string new_date[3], format;
    int index = 0;
    for (int i = 0; i < date.length(); i++)
    {
        if (date[i] != '/')
        {
            new_date[index] += date[i];
        }
        else
        {
            index++;
        }
    }
    int month = stoi(new_date[1]);
    format += full_month(month) + " " + new_date[0] + ", " + new_date[2];

    return format;
}

string Format_two(string date)
{
    string format;
    string new_date[3];
    int index = 0;
    for (int i = 0; i < date.length(); i++)
    {
        if (date[i] != '/')
        {
            new_date[index] += date[i];
        }
        else
        {
            index++;
        }
    }
    int month = stoi(new_date[1]);
    format += new_date[0] + " " + short_month(month) + " " + new_date[2];
    return format;
}
