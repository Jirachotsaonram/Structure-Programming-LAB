#include <iostream>
#include <iomanip>
using namespace std;
void star(int number)
{
    for (int i = 0; i < 5; i++)
    {
       
        cout << setw(2) << number << " : ";
        for (int j = 0; j < number; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n;

    cout << "Enter five numbers: ";
    cin >> n;
    star(n);
    return 0;
}