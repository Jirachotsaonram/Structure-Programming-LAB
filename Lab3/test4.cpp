#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3, num4, number;
    cout << "Enter number : " ;
    cin >> number;
    num1 = number / 1000;
    num2 = (number /100) % 10;
    num3 = (number / 10) % 10;
    num4 = number % 10;
    cout << num1 << "   " << num2 << "   " << num3 << "   " << num4;
    return 0 ;
}