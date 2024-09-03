#include <iostream>
using namespace std;
int main(){
    int Price, VatRate, Vat, Net;
    cout << "Enter Price : " ;
    cin >> Price;
    cout << "Enter Vat (%) : ";
    cin >> VatRate;
    Vat = Price / VatRate;
    Net = Price + Vat;
    cout << "Net Price of Product = " << Net ;
    return 0 ;
}