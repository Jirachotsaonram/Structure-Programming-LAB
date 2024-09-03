#include <iostream>
#include <iomanip>
using namespace std;
void printstar(int num)
{
    for (int j = 0; j < num; j++)
    {
        cout << "*";
    }
}

int main()
{
    int number;

    cout << "Enter five numbers: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> number;
        cout << setw(2) << number << " : ";
        printstar(number);
        cout << endl;
    }
    return 0;
}