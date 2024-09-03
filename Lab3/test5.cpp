#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3, num4, number, result;
    cout << "Enter binary number : " ;
    cin >> number;
    num1 = number / 1000;
    num2 = (number /100) % 10;
    num3 = (number / 10) % 10;
    num4 = number % 10;
    result = (num1 * 8) + (num2 * 4) + (num3 * 2) + (num4 * 1);
    cout << "Decimal value of "<< number << " = " << result;
    return 0 ;
}