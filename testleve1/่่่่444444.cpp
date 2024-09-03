#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int score;

    cout << "Enter score (enter 0 to stop): ";
    cin >> score;

    while (score != 0) {
        sum += score;
        cout << "Enter score (enter 0 to stop): ";
        cin >> score;
    }

    cout << "Total sum of scores: " << sum << endl;

    return 0;
}
