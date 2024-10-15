#include <iostream>
#include <string>
#include "time.h"
using namespace std;
int main()
{
    Time t1;
    Time t2(11, 30, 40);
    cout << "\nThis time t1 : ";
    t1.showTime();
    cout << "\nThis time t2 : ";
    t2.showTime();
    cout << endl;
    t1.setHours(5);
    t1.setMinutes(25);
    t1.setSecond(50);
    t2.setMinutes(t2.getMinutes() + 1);
    t2.setSecond(t2.getSecond() + 1);
    cout << "\nNow time t1 : ";
    t1.showTime();
    cout << "\nNow time t2 : ";
    t2.showTime();
    cout << endl;
    return (0);
}