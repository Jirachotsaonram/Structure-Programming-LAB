#include <iostream>
using namespace std;
int main(){
    float Radius, Area, Circum;
    const float PI = 3.1415;
    cout << "Program Calculate Area Circle." << endl;
    cout << "Circle radius (real time) ? " ;
    cin >> Radius;
    Area = PI * Radius * Radius;
    Circum = 2 * PI * Radius;
    cout << "Area of circle with radius "<< Radius << " is " << Area << endl;
    cout << "Circumference is " << Circum ;
    return 0 ;
}