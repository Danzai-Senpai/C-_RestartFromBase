#include<iostream>
using namespace std;

enum Level {
    LOW,
    MEDIUM,
    HIGH
};

int main() {

    enum Level myVar =  MEDIUM;

    switch (myVar)
    {
    case 1:
        printf("Low Level");
        break;
    case 2:
        printf("Medium Level");
        break;
    case 3:
        printf("Low Level");
        break;
    }

    return 0;

}