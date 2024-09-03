#include <iostream>
#include <string>
using namespace std;
int main(){
    float distance, period, fare, fareDistance = 0, farePeriod = 0;
    string a;
    cout << "Enter distance : ";
    cin >> distance ;
    cout << "Enter period : ";
    cin >> period ;
    if(distance >= 0 && distance <= 1){
        fareDistance = 35;
    }else if(distance >= 2 && distance <= 12){
        fareDistance = 5 * distance;
        a = "5";
    }else if(distance >= 13 && distance <= 20){
        fareDistance = 5.50 * distance;
        a ="5.50";
    }else if(distance >= 21 && distance <= 40){
        fareDistance = 6 * distance;
        a = "6";
    }else if(distance >= 41 && distance <= 60){
        fareDistance = 6.50 * distance;
        a = "6.50";
    }else if(distance >= 61 && distance <= 80){
        fareDistance = 7.50 * distance;
        a = "7.50";
    }else if(distance >= 81 ){
        fareDistance = 8.50 * distance;
        a = "8.50";
    }else{
        cout << "***Must be entered as numbers only.***";
    }

    farePeriod = period * 2;

    fare = fareDistance + farePeriod;
    cout << "--------------------------------" << endl;
    cout << "Distance and Period of service."<< endl;
    cout << "Distance. " << distance << "km" << endl;
    cout << "Period. " << period << "hr" << endl;
    if(distance >=2){
        cout << "Fare distance " << distance << " x " << a  << " = " << fareDistance << " baht" << endl;
    }else {
        cout << "Fare distance| 0-1km | 35 baht"<< endl;
    }
    cout << "Fare period " << period << " x " << "2" <<  " = "<< farePeriod << " baht" << endl;
    cout << "total fare " << fare << endl;
    cout << "--------------------------------" << endl;
}