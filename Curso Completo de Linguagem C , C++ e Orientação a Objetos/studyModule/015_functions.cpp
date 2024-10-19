#include<iostream>
using namespace std;

void myFunction(string fname = "Leon", int age = 26);
int myReturn(int x, int y);
void myFunction(int &x, int &y);
void myFunction(int myNumbers[5]);

//Global Variable
string global;

int main() {

    //Local Variable
    string local;
    
    cout << "\n";

    myFunction();
    myFunction("Liam", 3);
    myFunction("Jenny", 14);
    myFunction("Anja", 30);
    cout << "\n";

    myReturn(3, 5);
    cout << "\n";

    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: ";
    cout << firstNum << secondNum << "\n";

    myFunction(firstNum, secondNum);

    cout << "After swap: ";
    cout << firstNum << secondNum << "\n\n";

    int myNumbers[5] = {10, 20, 30, 40, 50};
    myFunction
    (myNumbers);

    return 0;
}

void myFunction(string fname, int age) {
    cout << fname << " Refnes. " << age << " years old. \n";
}

void myFunction(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

void myFunction(int myNumbers[5]) {
    for (int i = 0; i < 5; i++) {
        cout << myNumbers[i] << "\n";
    }
}

int myReturn(int x, int y) {
    cout << x + y << " \n";
}