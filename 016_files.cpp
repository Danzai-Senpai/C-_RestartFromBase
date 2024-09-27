#include<iostream>
#include<string>
#include<fstream> // create, reads and writes files
//#include<ifstream> // reads from files
//#include<ofstream> // create and write files
using namespace std;

int main() {
    ofstream MyFile("filename.txt"); // create and ope text file
    MyFile << "This is a file."; // write to the file
    MyFile.close(); // close the file (It is considered good practice, and it can clean up unnecessary memory space.)

    string myText;
    ifstream ReadMyFile("filename.txt"); // Read from the text file
    while (getline (ReadMyFile, myText)) { // Use a while loop together with the getline() function to read the file line by line
        cout << myText; // Output the text from the file
    }
    ReadMyFile.close(); // Close the file

}