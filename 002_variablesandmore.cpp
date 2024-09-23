#include<iostream>

using namespace std;

int main(){
    int intTest = 22;
    double doubleTest = 1.76, doubleTest1 = 109.65;
    char charTest = 'A';
    const string stringTest = "Ronald";
    bool boolTest = true;

    cout << "\n";
    cin >> intTest;
    cout << "Hi, my name is " << stringTest << " and I'm " << intTest << " years old." << "\n";
    cout << "My blood type is " << charTest << " and my height is " << doubleTest << ". \n";
    cout << intTest + doubleTest + doubleTest1;
    cout << "\n\n";

    //string stringTest = "Caua0";
}
