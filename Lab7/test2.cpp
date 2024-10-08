#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

char getGrade(int* score);

int main() {
    int numStudents;
    
    cout << "Enter the number of students: ";
    cin >> numStudents;

    int* scores = new int[numStudents];
    int gradeA = 0, gradeB = 0, gradeC = 0, gradeD = 0, gradeF = 0;

    srand(time(0));
    for (int i = 0; i < numStudents; i++) {
        scores[i] = rand() % 101;
        cout << "Student " << i+1 << " score: " << scores[i] << endl;

        char grade = getGrade(&scores[i]); 
        switch (grade) {
            case 'A': gradeA++; break;
            case 'B': gradeB++; break;
            case 'C': gradeC++; break;
            case 'D': gradeD++; break;
            case 'F': gradeF++; break;
        }
    }

    cout << "\nGrade Distribution:" << endl;
    cout << "A: " << gradeA << endl;
    cout << "B: " << gradeB << endl;
    cout << "C: " << gradeC << endl;
    cout << "D: " << gradeD << endl;
    cout << "F: " << gradeF << endl;

    delete[] scores;

    return 0;
}



char getGrade(int* score) {
    if (*score >= 80) return 'A';
    else if (*score >= 70) return 'B';
    else if (*score >= 60) return 'C';
    else if (*score >= 50) return 'D';
    else return 'F';
}