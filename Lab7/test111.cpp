
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string getMonth(int month) {
    string months[12] = {"January", "February", "March", "April", "May", "June","July", "August", "September", "October", "November", "December"};
    if (month >= 1 && month <= 12)
        return months[month - 1];
    return "";
}

string getMonthAbbreviation(int month) {
    string monthAbbr[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun","Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    if (month >= 1 && month <= 12)
        return monthAbbr[month - 1];
    return "";
}

string format1(int day, int month, int year) {
    return getMonth(month) + " " + to_string(day) + ", " + to_string(year);
}


string format2(int day, int month, int year) {
    return to_string(day) + " " + getMonthAbbreviation(month) + " " + to_string(year);
}


int main() {
    string inputDate;
    cout << "Input Date (dd/mm/yyyy): ";
    cin >> inputDate;

    int day = stoi(inputDate.substr(0, 2));
    int month = stoi(inputDate.substr(3, 2));
    int year = stoi(inputDate.substr(6, 4));
    cout << "Format 1: " << format1(day, month, year) << endl;
    cout << "Format 2: " << format2(day, month, year) << endl;

    return 0;
}
