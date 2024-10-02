#include<iostream>
using namespace std;

int main() {
    int age;
    cout << "What\'s tour age: ";
    cin >> age;

    try {
        if (age >= 18) {
            cout << "Access granted - you are old enough.\n";
        } else {
            throw (age);
        }
    } catch (int myNum) {
        cout << "Access denied - You must be at least 18 years old.\n";
        cout << "Age is: " << myNum << "\n\n";
    }

    try {
        if (age >= 18) {
            cout << "Access granted - you are old enough.\n";
        } else if (age < 18){
            cout << "Access denied - You must be at least 18 years old.\n";
        } else {
            throw 505;
        }
    } catch (...) {
        cout << "You wrong in some part of input.\n";
    }
}