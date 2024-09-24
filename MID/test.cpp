#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>  
using namespace std;

float total_scores(float final_exam , float mid_exam , float homework , float behavior , float report){
    float total_score = final_exam + mid_exam + homework + behavior + report;
    return total_score;
}

string grad_by_total_scores(float total_score) {
    string grade;
    if (total_score >= 90) return "A";
    else if (total_score >= 85) return "B+";
    else if (total_score >= 80) return "B";
    else if (total_score >= 75) return "C+";
    else if (total_score >= 70) return "C";
    else if (total_score >= 65) return "D+";
    else if (total_score >= 60) return "D";
    else return "F";
}

void display(string name,float final_exam,float mid_exam,float homework,float behavior,float report,float total_score,string grade){
    cout << fixed << setprecision(2);
    cout << "\n-------------------------------------\n";
    cout << "Student's Name: " << name << endl;
    cout << "Final Exam Score: " << final_exam << " / 30" << endl;
    cout << "Midterm Exam Score: " << mid_exam << " / 30" << endl;
    cout << "Homework Score: " << homework << " / 15" << endl;
    cout << "Behavior Score: " << behavior << " / 10" << endl;
    cout << "Report Score: " << report << " / 15" << endl;
    cout << "Total Score: " << total_score << " / 100" << endl;
    cout << "Grade: " << grade << endl;
    cout << "-------------------------------------\n";
}

int main() {
    string name;
    float final_exam, mid_exam, homework, behavior, report, total_score;
    
    string names[10] = {"John", "Alice", "Bob", "Mary", "Tom", "Sarah", "Emma", "Michael", "David", "Sophia"};
    srand(static_cast<unsigned>(time(0)));
    int random_index = rand() % (sizeof(names) / sizeof(names[0]));
    name = names[random_index] ;

    do {
        final_exam = rand() % 31;
    } while (final_exam < 0 || final_exam > 30);

    do {
        mid_exam = rand() % 31;
    } while (mid_exam < 0 || mid_exam > 30);

    do {
        homework = rand() % 16;
    } while (homework < 0 || homework > 15);

    do {
        behavior = rand() % 11;
    } while (behavior < 0 || behavior > 10);

    do {
        report = rand() % 16;
    } while (report < 0 || report > 15);

    total_score = total_scores(final_exam , mid_exam , homework , behavior , report);
    string grade = grad_by_total_scores(total_score);
    display(name , final_exam , mid_exam , homework , behavior , report , total_score , grade);
    return 0 ;
}
