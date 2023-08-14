#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double loan_amount, interest, payment_per_year, last_year_payment;
    cout << "Input Loan Interest Payment: ";
    cin >> loan_amount >> interest >> payment_per_year;
    cout << "Year Remained" << endl;

    int years = 0;

    while (loan_amount > payment_per_year)
    {
        years++;
        loan_amount = (loan_amount - payment_per_year) * (1 + interest / 100);
        last_year_payment = loan_amount;
        cout << years << " : " << loan_amount << endl;
    }
    cout << "Number of Year : " << years << endl;
    cout << "Total Payment : ";
    cout << fixed << setprecision(2) << years * payment_per_year + last_year_payment << endl;

    return 0;
}