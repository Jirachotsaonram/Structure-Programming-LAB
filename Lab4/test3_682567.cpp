#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str , massage;
    int countuppers = 0, countlowers = 0, countspaces = 0, countspacial = 0;
    cout << "Enter massage : ";
    getline(cin, str);
    massage = str;
    for (char str : massage)
    {
        if (isupper(str))
        {
            countuppers += 1;
        }
        else if (islower(str))
        {
            countlowers += 1;
        }
        else if (isspace(str))
        {
            countspaces += 1;
        }
        else
        {
            countspacial += 1;
        }
    }
    cout << "You massge have " << countuppers << " uppers character." << endl;
    cout << "You massge have " << countlowers << " lowers character." << endl;
    cout << "You massge have " << countspaces << " spaces character." << endl;
    cout << "You massge have " << countspacial << " spacial character." << endl;
    return (0);
}