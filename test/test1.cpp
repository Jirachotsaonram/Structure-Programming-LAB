#include <iostream>
using namespace std;
float totalCalories(float calories_per_kg, float loseWeight, float &calories)
{
    calories = calories_per_kg * loseWeight;
    return (calories);
}
float totalSubject(float calories, float calories_per_subject, float &numSubject)
{
    numSubject = calories / calories_per_subject;
    return (numSubject);
}
float subject_per_day(float numSubject, float month, float &perDay)
{
    perDay = numSubject / month;
    return (perDay);
}
void Print(float perDay){
    cout << "Subject per day " << perDay;
}
int main()
{
    float calories_per_subject = 113, calories_per_kg = 7700, month = 30, loseWeight = 3;
    float calories, numSubject, perDay;
    totalCalories(calories_per_kg, loseWeight, calories);
    totalSubject(calories, calories_per_subject, numSubject);
    subject_per_day(numSubject, month, perDay);
    Print(perDay);
}
