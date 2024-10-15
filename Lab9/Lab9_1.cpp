#include <iostream>
#include "time9_1.h"
using namespace std;
int main()
{
Time t1;
 cout << "Enter hour : ";
cin >> t1.hours;
cout << "Enter minutes : ";
cin >> t1.minutes;
cout << "Enter second : ";
cin >> t1.second;
cout << "\nThis Time is : " << t1.hours << ":";
cout << t1.minutes << ":" << t1.second << endl;
cout << endl;
return(0);
}