#include <iostream>
using namespace std;
int main()
{
    int fish = 520, tomato = 333, result1, result2,fishre,tomatore,confish;
    result1 = fish / 3;
    result2 = tomato / 2;
    if (result1 < result2)
    {
        confish = result1;
        cout << result1<<endl;      
    }
    else
    {
        confish = result2;
        cout << result2<<endl;      
    }
    fishre = fish - (confish * 3);
    tomatore = tomato - (confish * 2);
    cout << "fish : " << fishre<<endl;
    cout << "tomato : " << tomatore<<endl;
}