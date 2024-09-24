#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isPalindrome(const string word);
int main(){
    string word;
    cout << "Enter text : " ;
    getline(cin,word);
    bool result = isPalindrome(word);
    for()
    if(result) ? "Your text is Palindrome." : "Your text is not Palindrome." ;
    return 0 ;
}
bool isPalindrome(const string word){
    char c[];
    for(const char w : word){
        int i = 0;
        c[i] = w;
        i++;
    }
    return false;
}