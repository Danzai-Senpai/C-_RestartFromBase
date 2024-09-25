#include<iostream>
using namespace std;

int main(){
    // Wrong form
    int myNumbers[5] = {10,20,30,40,50};
     for (int i = 0; i < 5; i++) {
        cout << myNumbers[i] << "\n";
     }

    cout << "\n\n";

    // Right form
    for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++) {
        cout << myNumbers[i] << "\n";
    }

    cout << "\n\n";

    // C++ 2011 form 
    for (int i : myNumbers) {
        cout << i << "\n";
    }
}