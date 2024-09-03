#include <iostream>
using namespace std;
int main(){
    int startKm, endKm, Km, hour, minute;
    double total_minutes, averageSpeed, second;
    cout << "Data inputs are integer!." << endl;
    cout << "Enter star kilometer : ";
    cin >> startKm;
    cout << "Enter end kilometer : ";
    cin >> endKm;
    cout << "Enter time used(hour minute second) : ";
    cin >> hour >> minute >> second;
    Km = endKm - startKm;
    total_minutes = (hour * 60) + minute + (second / 60);
    averageSpeed = (Km / total_minutes) * 60;
    cout << "\nCar traveled " << Km << " kilommeters in " << hour << " hrs " << minute << " min " << second << " sec."<< endl;
    cout << "Average velocity was "<< averageSpeed << " kph.";
    return 0 ;
}