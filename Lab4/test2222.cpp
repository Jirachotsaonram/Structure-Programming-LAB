#include <iostream>
#include <string>
using namespace std;
int main()
{
    int Number;
    string Name;
    cout << "Input number line : ";
    cin >> Number;
    cout << "Input Character : ";
    cin >> Name;
    for (int n = 1 ; n <= Number ; n++){
        for(int i = 1 ; i <= Number - n ; i++){
            cout << endl;
        }
        for(int j = 1 ; j <= (2 * n - 1) ; j++){
            cout << Name;
        }
    }
    
    return(0);
}