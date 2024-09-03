#include <iostream>
#include <string>
using namespace std;
int main(){
    int firstCoin, secondCoin;
    string result;
    cout << "Enter choss a coin 1 = head , 2 = tail" << endl;
    cout << "first coin : ";
    cin >> firstCoin;
    cout << "second coin : ";
    cin >> secondCoin;

    if(firstCoin == 1){
        if(secondCoin == 1){
            result = "head";
        }else if(secondCoin == 2){
            result = "center";
        }
    }else if(firstCoin == 2){
        if(secondCoin == 1){
            result = "center";
        }else if(secondCoin == 2){
            result = "tail";
        }
    }
    cout << "coins issued " << result;
    return(0);
}