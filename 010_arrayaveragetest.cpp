#include<iostream>
using namespace std;

int main() {

    int ages[8] = {20,22,18,35,48,26,87,70};
    float avg, sum = 0;
    int i;

    int length = sizeof(ages) / sizeof(ages[0]);

    for (int age : ages) {
        sum += age;
    }

    avg = sum / length;

    cout << "The everage age is: " << avg << "\n";

    int lowestAge = ages[0];

    for (int age : ages) {
        if (lowestAge > age) {
            lowestAge = age;
        }
    }

    cout << "The lowest age is: " << lowestAge << "\n";
}