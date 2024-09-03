#include <iostream>
using namespace std;
int main(){
    double income, pay;
    cout << "Enter income :";
    cin >> income;
    if (income > 0 && income <= 100000) {
        pay = (income * 5) / 100;
        cout << "Must pay income tax 5%" << endl;
    }
    else if (income >= 100001 && income <= 500000 ) {
        pay = (income * 10) / 100;
        cout << "Must pay income tax 10%" << endl;
    }
    else if (income >= 500001 && income <= 1000000) {
        pay = (income * 20) / 100;
        cout << "Must pay income tax 20%" << endl;
    }
    else if (income >= 1000001 && income <= 4000000 ) {
        pay = (income * 30) / 100;
        cout << "Must pay income tax 30%" << endl;
    }
    else if (income >= 4000001) {
        pay = (income * 37) / 100;
        cout << "Must pay income tax 37%" << endl;
    }
    else {
        cout << "\nEnter integers only.\n";
        return 1 ;
        }
    cout << "You have to pay taxes "<< pay ;
    return 0 ;
}