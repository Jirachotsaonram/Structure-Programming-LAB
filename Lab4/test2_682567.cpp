#include <iostream>
#include <string>
using namespace std;
int main()
{
    string moves;
    cout << "Enter A , B , C : ";
    cin >> moves;
    int position = 1;
    if (moves.length() > 50)
    {
        cout << "Input exceeds 50 characters." << endl;
        return (1);
    }
    for (char move : moves)
    {
        switch (move)
        {
        case 'A':
            if (position == 1)
            {
                position = 2;
            }
            else if (position == 2)
            {
                position = 1;
            }
            break;

        case 'B':
            if (position == 2)
            {
                position = 3;
            }
            else if (position == 3)
            {
                position = 2;
            }
            break;

        case 'C':
            if (position == 1)
            {
                position = 3;
            }
            else if (position == 3)
            {
                position = 1;
            }
            break;
        }
    }
    cout << position;
    return (0);
}