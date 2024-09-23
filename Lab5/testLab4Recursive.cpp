#include <iostream>
using namespace std;

float CalculateDeposit(float principal, float rate, int years);

int main() {
    float principal, rate;
    int years;
    cout << "Enter the initial deposit amount: ";
    cin >> principal;
    cout << "Enter the interest rate: ";
    cin >> rate;
    cout << "Enter the number of years: ";
    cin >> years;

    for (int i = 1; i <= years; i++) {
        float amount = CalculateDeposit(principal, rate, i);
        cout << "Year " << i << ": " << amount << " baht" << endl;
    }
    return 0;
}

float CalculateDeposit(float principal, float rate, int years) {
    if (years == 0)
        return principal;
    return CalculateDeposit(principal * (1 + rate / 100), rate, years - 1);
}