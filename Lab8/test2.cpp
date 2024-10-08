#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

bool isEndOfSentence(char ch) {
    return ch == '.' || ch == '!' || ch == '?';
}

int main() {
    const string FileName = "myfiletest2.dat";
    ifstream inFile(FileName, ios_base::in);

    
    if (!inFile) {
        cout << "Error: File not found." << endl;
        return 1;
    }

    int wordCount = 0;
    int sentenceCount = 0;
    string word;

    while (inFile >> word) { 
        wordCount++;

        if (isEndOfSentence(word.back())) {
            sentenceCount++;
        }
    }

    inFile.close();

    cout << "Number of words: " << wordCount << endl; // แสดงจำนวนคำ
    cout << "Number of sentences: " << sentenceCount << endl; // แสดงจำนวนประโยค

    return 0;
}