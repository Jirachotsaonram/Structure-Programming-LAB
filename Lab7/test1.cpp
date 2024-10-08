#include <iostream>
#include <string>
using namespace std;

const char *getMonth(int *month);
const char *getM(int *month);
string format1(int *day, int *month, int *year);
string format2(int *day, int *month, int *year);

int main()
{
    int day, month, year;

    cout << "Enter date (dd/mm/yyyy): ";
    scanf("%d/%d/%d", &day, &month, &year);

    int *D = &day;
    int *M = &month;
    int *Y = &year;

    cout << "Format 1: " << format1(D, M, Y) << endl;
    cout << "Format 2: " << format2(D, M, Y) << endl;

    return 0;
}

const char *getMonth(int *month)
{
    const char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    if (*month >= 1 && *month <= 12)
        return months[*month - 1];
    return "";
}

const char *getM(int *month)
{
    const char *monthAbbr[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    if (*month >= 1 && *month <= 12)
        return monthAbbr[*month - 1];
    return "";
}

string format1(int *day, int *month, int *year)
{
    return string(getMonth(month)) + " " + to_string(*day) + ", " + to_string(*year);
}

string format2(int *day, int *month, int *year)
{
    return to_string(*day) + " " + getM(month) + " " + to_string(*year);
}