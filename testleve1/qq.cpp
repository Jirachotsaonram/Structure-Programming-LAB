#include <iostream>
using namespace std;
int main()
{
    int  m=0, day = 10, sum = 0, times;
    cout << "enter moeny";
    cin >> m;
    for ( int i = 1; i <= m; i++)
    {
        day += 1;
         if (day <= m)
        {
            sum = m - day;
        }
    times = i / sum;
    }
    cout << "yo: "50<< times;
    cout << sum;
}