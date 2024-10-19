#include<iostream>
#define TAM 3

void printSequentialList(int *vector, int sizeOfSequentialList) {
    for (int i = 0; i < sizeOfSequentialList; i++) {
        std::cout << "Value of " << i << " is " << vector[i] << std::endl;
    }
}

int main() {

    int vector[TAM] = {1, 2, 3}, count, sizeOfSequentialList;

    printSequentialList(vector, TAM);
    
    for (int i = 0; i < TAM; i++) {
        std::cin >> vector[i];
    }

    printSequentialList(vector, TAM);

    std::cout << "What the size of the vector that you want: ";
    std::cin >> sizeOfSequentialList;

    int *newVector = new int[sizeOfSequentialList];

    for (int i = 0; i < sizeOfSequentialList; i++) {
        std::cin >> newVector[i];
    }

    printSequentialList(newVector, sizeOfSequentialList);

    return 0;
}