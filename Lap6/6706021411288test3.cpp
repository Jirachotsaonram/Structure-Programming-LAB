#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

struct Student
{
    int id;
    string name;
    float test1, test2, test3, total;
};

void getdata(Student students[], int size);
bool compareTotal(const Student &a, const Student &b)
{
    return a.total > b.total;
}
void sortdata(Student students[], int size);
float average(const Student students[], int size);
void displaydata(const Student students[], int size);

int main()
{
    const int size = 20;
    Student students[size];

    getdata(students, size); 
    sortdata(students, size);  
    displaydata(students, size); 
    return 0;
}

void getdata(Student students[], int size)
{
    srand(time(0));
    string names_list[20] = {
        "John", "Alice", "Bob", "Charlie", "David",
        "Eva", "Frank", "Grace", "Hannah", "Ivan",
        "Jack", "Karen", "Liam", "Mona", "Nina",
        "Oscar", "Paul", "Quincy", "Rachel", "Sam"};

    for (int i = 0; i < size; i++)
    {
        students[i].id = 10001 + i;
        students[i].name = names_list[i];
        students[i].test1 = rand() % 100 + 1;
        students[i].test2 = rand() % 100 + 1;
        students[i].test3 = rand() % 100 + 1;
        students[i].total = students[i].test1 * 0.25 + students[i].test2 * 0.25 + students[i].test3 * 0.5;
    }
}

void sortdata(Student students[], int size)
{
    sort(students, students + size, compareTotal);
}

float average(const Student students[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += students[i].total;
    }
    return sum / size;
}

void displaydata(const Student students[], int size)
{
    cout << "-----------------------------------------------------------------------------------------------\n";
    cout << setw(5) << "No." << setw(10) << "Id" << setw(15) << "Name"
         << setw(15) << "Test1 (25%)" << setw(15) << "Test2 (25%)" << setw(15) << "Test3 (50%)"
         << setw(15) << "Total (100%)" << endl;
    cout << "-----------------------------------------------------------------------------------------------\n";

    for (int i = 0; i < size; i++)
    {
        cout << setw(5) << i + 1
             << setw(10) << students[i].id
             << setw(15) << students[i].name
             << setw(15) << students[i].test1
             << setw(15) << students[i].test2
             << setw(15) << students[i].test3
             << setw(15) << students[i].total
             << endl;
    }

    float avg = average(students, size);
    cout << "-----------------------------------------------------------------------------------------------\n";
    cout << "Average of marks: " << avg << endl;
}