#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char str[])
{
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++)
    {
        cout << str[i] << " = " << str[length - i - 1] << endl;
        if (str[i] != str[length - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char str[200];
    cout << "Enter text: ";
    cin >> str;
    if (isPalindrome(str))
    {
        cout << "Your text is Palindrome.\n";
    }
    else
    {
        cout << "Your text is not Palindrome.\n";
    }

    return 0;
}
