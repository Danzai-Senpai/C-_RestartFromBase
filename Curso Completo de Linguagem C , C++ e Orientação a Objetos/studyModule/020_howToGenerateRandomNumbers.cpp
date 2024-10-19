#include<iostream>
#include<cstdlib>
#include<ctime>

int main() {
    srand(time(0)); // Get a different randon number each time the program runs
    int randomNum = rand() % 101; // Generate a random number between 0 and 100

    std::cout << randomNum;

    return 0;
}