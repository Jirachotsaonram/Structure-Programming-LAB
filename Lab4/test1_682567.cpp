#include <iostream>
using namespace std;
int main()
{
    int x1, x2, s;
    cout << "Enter Two integers : ";
    cin >> x1 >> s;
    if (x1 >= -1000 && x1 <= 1000 && s >= -1000 && s <= 1000)
    {
        x2 = (s * 2) - x1;
        cout << x2;
    }
    else
    {
        return (1);
    }
    return (0);
}