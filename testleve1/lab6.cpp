#include <iostream>
using namespace std;
int main(){
    int fish = 100, tomato = 500, result1,result2;
    result1 = fish / 3;
    result2 = tomato / 2;
    if (result1 < result2){
        cout << result1;
    }else {
        cout << result2;
    }
}