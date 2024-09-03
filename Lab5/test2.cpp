#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int number;

    cout << "Enter five numbers: ";
    
    for (int i = 0; i < 5; i++) {
        cin >> number;
        cout << setw(2) << number << " : ";
        for (int j = 0; j < number; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}