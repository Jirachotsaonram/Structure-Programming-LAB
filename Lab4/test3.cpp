//final30 min30 homework15 adsidement15 classroom10
#include <iostream>
using namespace std;
int main(){
    int grade, final, min , homework, adsidement, classroom, redo = 0;
    for(int i = 1 ; i <= 50 ; i++ ){
        cout << "\nCalculate grades by entering scores No." << i <<  endl;
        cout << "final30 , min30 , homework15 , adsidement15 , classroom10 : ";
        cin >> final >> min  >>  homework >> adsidement >> classroom;
        if(final <= 30 && final >=0 && min <= 30 && min >=0 && homework <= 15 && homework >=0 && adsidement <= 15 && adsidement >=0 && classroom <= 10 && classroom >=0){
            grade = final + min + homework + adsidement + classroom;
        }else{
            cout << "Score exceeded." << endl;
            cout << "Do it again" << endl;
            i = i - 1;
            redo = 1;
        }

        if(i <= 0){
            i = 0;
        }

        if(grade >= 0 && grade <= 100 && redo == 0){
            cout << "No." << i << " scores " << grade << endl;
            if(grade >= 90 && grade <= 100 && redo == 0){
                cout << "Grade A" << endl;
            }else if(grade >= 80 && grade <= 89 && redo == 0){
                cout << "Grade B" << endl;
            }else if(grade >= 70 && grade <= 79 && redo == 0){
                cout << "Grade C" << endl;
            }else if(grade >= 60 && grade <= 69 && redo == 0){
                cout << "Grade D" << endl;
            }else if(grade >= 0 && grade <= 59 && redo == 0){
                cout << "Grade F" << endl;
            }else{
                cout << "ERROR" << endl;
            }
        }

        redo = 0 ;
        grade = 0 ;
    }
    return 1 ;
}