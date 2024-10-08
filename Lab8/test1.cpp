#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int count = 1 ;
    string line;
    const string FileName = "mydata.dat";
    ifstream inFile(FileName,ios_base::in);
  
    if(!inFile){
        cout << "Error File not Found.";
        return 1;
    }


    while(getline(inFile,line)){
        cout << "No." << setw(3) << count << "   " << line << endl ;

        if(count == 24){
            cout << "\nPress Enter to continue\n";
            cin.ignore();
            count = 0;
        }
        count ++;
    }

    inFile.close();
    cout << "\nEnd of File.\n";
    return 0 ;
}