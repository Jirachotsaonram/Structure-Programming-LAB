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
    int n1,n2,n3,n4,n5;

    cout << "Enter five numbers: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    star(n1,n2,n3,n4,n5);
    return 0;
}