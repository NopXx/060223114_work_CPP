#include <iostream>

using namespace std;

bool CheckPrime(int number);

int main()
{
    int number = 0;
    cout << "Input Integer Number : ";
    cin >> number;
    cout << "Number Is ";
    cout << (CheckPrime(number) ? "Prime" : "Not Prime\n");
    return 0;
}

// bool CheckPrime(int number)
// {
//     if ((number <= 1 || number % 2 == 0 || number % 3 == 0 || number % 5 == 0 || number % 7 == 0) 
//         && (number != 2 && number != 3 && number != 5 && number != 7))
//     {
//         return false;
//     }
//     else
//     {
//         return true;
//     }
// }

bool CheckPrime(int number)
{
    if (number <= 1)
    {
        return false;  // Numbers less than or equal to 1 are not prime.
    }
    
    for (int i = 2; i * i <= number; ++i)
    {
        cout << "for " << i << " \n";
        if (number % i == 0)
        {
            return false;  // Found a divisor, so the number is not prime.
        }
    }
    
    return true;  // If no divisors were found, the number is prime.
}