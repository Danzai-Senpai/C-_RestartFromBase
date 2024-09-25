#include<iostream>
using namespace std;

int main() {
    int myNumbers[5] = {10,20,30,40,50};

    cout << sizeof(myNumbers);
    // The return was 20 because the return was made in bytes.

    int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);

    cout << getArrayLength;
    // The return now is the quantity o elements inside  the array myNumbers
}