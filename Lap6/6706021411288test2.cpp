#include <iostream>
#include <iomanip>
#include <cstdlib> 
using namespace std;

int main() {
    srand(time(0)); 
    int num_candidates;
    int total_students = 500;
    int total_votes = rand()%500+1;
    int total = total_votes;
    int not_votes;
    int votes[100];
    float percent[100];

    cout << "Enter number of student chairman: ";
    cin >> num_candidates;

    for (int i = 0; i < num_candidates - 1; ++i) {
        votes[i] = rand() % (total_votes + 1);
        total_votes -= votes[i];
    }

    votes[num_candidates - 1] = total_votes;


    not_votes = total_students - total;  

    cout << "\nNumber of right student : " << total_students << endl;
    cout << "Number of Votes : " << total << " = " << fixed << setprecision(1) << (total * 100.0 / total_students) << "%" << endl;
    cout << "Number of not Votes : " << not_votes << " = " << fixed << setprecision(1) << (not_votes * 100.0 / total_students) << "%" << endl;

    cout << "\nResult of election chairman\n";
    cout << "-------------------------------\n";
    cout << " No.\tVotes\tPercent(%)\n";
    cout << "-------------------------------\n";
    for (int i = 0; i < num_candidates; i++) {
        percent[i] = (votes[i] * 100.0) / total;
        cout << " " << i + 1 << "\t" << votes[i] << "\t" << fixed << setprecision(2) << percent[i] << "%" << endl;
    }

    cout << "-------------------------------\n";
    cout << "Total\t" << total << "\t100.00%" << endl;

    return 0;
}