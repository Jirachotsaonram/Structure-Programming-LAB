#include <iostream>
using namespace std;

int main()
{

    double calories_per_subject = 113,calories_per_kg = 7700, month = 30, subject_per_day = 0, loseWeight = 3, totalCalories, totalSubject;

    totalCalories = calories_per_kg * loseWeight;
    totalSubject = totalCalories / calories_per_subject;
    subject_per_day = totalSubject / month;
    cout << subject_per_day;
}
