#include <iostream>
using namespace std;
int main(){
    int Length, Widht, Area;
    cout << "Program Calculate Area Rectangle." << endl;
    cout << "Enter Length : ";
    cin >> Length;
    cout << "Enter Widht : " ;
    cin >> Widht;
    Area = Length * Widht;
    cout << "Area of Rectangel : " << Area;
    return 0 ;
}