#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Read the file first
    ifstream MyFile("myFirstFile.txt");

    string line;

    while (getline(MyFile, line)) {
        cout << line << endl;
    }

    MyFile.close();

    // Append new content
    ofstream MyWriteFile("myFirstFile.txt", ios::app);

    MyWriteFile << "This is new content3 from vscode. Hi Akshita  pleasae dont get confuse we are adding file only from here \n";

    MyWriteFile.close();

    // Open the file again to check the new content
    ifstream MyReadFile("myFirstFile.txt");

    string line1;

    while (getline(MyReadFile, line1)) {
        cout << line1 << endl;
    }

    MyReadFile.close();

    return 0;
}



/*how to run file on vscode terminal
PS D:\alphaProgramming\C++> g++ readfile.cpp -o readfile
PS D:\alphaProgramming\C++> .\readfile      */
