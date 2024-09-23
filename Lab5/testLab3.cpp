#include <iostream>
using namespace std;

bool CheckPrime(int num);

int main()
{
    int number;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (CheckPrime(number))
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;
    return 0;
}

bool CheckPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}