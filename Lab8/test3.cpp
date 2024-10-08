#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int Menu();
void AddStudent(string FN);
void DisplayStudent(string FN);
void ReportGrade(string FN);

int main() {
    const string Filename = "student.dat";
    ifstream InFile;
    ofstream OutFile;
    int c;
    do {
        system("cls"); // call external command
        c = Menu();
        switch (c) {
        case 1:
            AddStudent(Filename);
            break;
        case 2:
            DisplayStudent(Filename);
            break;
        case 3:
            ReportGrade(Filename);
            break;
        }
    } while (c != 0);
    cout << "Exit program." << endl;
    return 0;
}

int Menu() {
    string line(25, '=');
    int Choose;
    cout << "Program Add-Display Student Data\n";
    cout << line << endl;
    cout << ": Main Menu :\n";
    cout << line << endl;
    cout << ": 0 - Exit :\n";
    cout << ": 1 - Add Student :\n";
    cout << ": 2 - Display Student :\n";
    cout << ": 3 - Report Grade :\n";
    cout << line << endl;
    cout << " Enter choose : ";
    cin >> Choose;
    return Choose;
}

void AddStudent(string FN) {
    // open file for write and append
    ofstream OutFile(FN.c_str(), ios_base::out | ios_base::app);
    if (OutFile.is_open()) {
        string Id, Name, Grade;
        cout << "\n Add Student \n";
        cout << "Enter id: ";
        cin >> Id;
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, Name);
        cout << "Enter grade: ";
        cin >> Grade;
        // write data to file student.dat
        OutFile << Id << " " << Name << " " << Grade << endl;
        OutFile.close();
        char Wait;
        cin.get(Wait);
        cout << "\nSaved, Press Enter to continue";
        cin.get(Wait);
    } else
        cout << "File could not be opened." << endl;
}

void DisplayStudent(string FN) {
    ifstream InFile(FN.c_str(), ios_base::in); // open file for reading
    if (InFile.is_open()) {
        string Id, Name, Grade;
        string line(30, '=');
        int n = 0;
        cout << "\nList of Students\n";
        cout << line << endl;
        cout << " No.  Id    Name\n";
        cout << line << endl;
        // read data from file student.dat
        while (InFile >> Id) {
            InFile >> Name >> Grade;
            n++;
            cout << right << setw(3) << n << " : ";
            cout << left << setw(6) << Id;
            cout << " " << setw(20) << Name << endl;
        }
        InFile.close();
        char Wait;
        cout << "\nPress Enter to continue";
        cin.get(Wait);
        cin.get(Wait);
    } else
        cout << "File could not be opened." << endl;
}

void ReportGrade(string FN) {
    ifstream InFile(FN.c_str(), ios_base::in); // open file for reading
    if (InFile.is_open()) {
        string Id, Name, Grade;
        string line(40, '=');
        int n = 0;
        cout << "\nReport Grade\n";
        cout << line << endl;
        cout << " No.  Id    Name                 Grade\n";
        cout << line << endl;
        // read data from file student.dat
        while (InFile >> Id >> Name >> Grade) {
            n++;
            cout << right << setw(3) << n << " : ";
            cout << left << setw(6) << Id;
            cout << " " << setw(16) << Name;
            cout << " " << Grade << endl;
        }
        InFile.close();
        char Wait;
        cout << "\nPress Enter to continue";
        cin.get(Wait);
        cin.get(Wait);
    } else
        cout << "File could not be opened." << endl;
}