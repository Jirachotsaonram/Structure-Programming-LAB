#include <iostream>
using namespace std;
int main(){
    int grade;
    for(int i = 1 ; i <= 50 ; i++ ){
        cout << "Calculate grades by entering scores No." << i << " : ";
        cin >> grade;
        if(grade >= 90 && grade <= 100){
            cout << "Grade A" << endl;
        }else if(grade >= 80 && grade <= 89){
            cout << "Grade B" << endl;
        }else if(grade >= 70 && grade <= 79){
            cout << "Grade C" << endl;
        }else if(grade >= 60 && grade <= 69){
            cout << "Grade D" << endl;
        }else if(grade >= 0 && grade <= 59){
            cout << "Grade F" << endl;
        }else{
            cout << "ERROR" << endl;
        }
    }
    return 1 ;
}