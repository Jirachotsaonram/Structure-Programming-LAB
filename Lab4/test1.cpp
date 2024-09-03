#include <iostream>
using namespace std;
int main(){
    int grade;
    cout << "Calculate grades by entering scores : ";
    cin >> grade;
    if(grade >= 90 && grade <= 100){
        cout << "Grade A";
    }else if(grade >= 80 && grade <= 89){
        cout << "Grade B";
    }else if(grade >= 70 && grade <= 79){
        cout << "Grade C";
    }else if(grade >= 60 && grade <= 69){
        cout << "Grade D";
    }else if(grade >= 0 && grade <= 59){
        cout << "Grade F";
    }else{
        cout << "ERROR";
        return(1);
    }
    return(0);
}