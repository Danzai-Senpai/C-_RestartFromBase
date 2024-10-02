#include<iostream>

using namespace std;

int main(){
    int intTest = 22;
    double doubleTest = 1.76, doubleTest1 = 109.65;
    char charTest = 'A';
    string stringTest = "Ronald";
    string stringTest1 = "Symon";
    bool boolTest = true;

    string name = stringTest.append(" " + stringTest1);

    cout << "\n";
    cout << "How is your age: ";
    cin >> intTest;
    cout << "\n\n";

    cout << "Hi, my name is " << name << " and I'm " << intTest << " years old." << "\n";
    cout << "My blood type is " << charTest << " and my height is " << doubleTest << ". \n";
    cout << intTest + doubleTest + doubleTest1;
    cout << "\n\n";

    cout << "My name has \'" << name.length() << "\' characters.\n";
    cout << "My name has \'" << name.size() << "\' characters.\n";
    cout << "The first word of my name is \"" << name[0] << "\" and the last is " << name[name.length() - 1] << ".\n";
    name.at(0) = 'D';
    cout << "If I change the first word of my first name for the word \'D\' my name will be " << name << ".\n";
    cout << "\n\n";

    //const string stringTest = "Caua0";
}
