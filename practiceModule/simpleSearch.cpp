#include<iostream>
#define TAM 10

void printVector(int vector[TAM]) {
    for (int i = 0; i < TAM; i++) {
        if (i < TAM - 1){
            std::cout << vector[i] << " - ";
        } else {
            std::cout << vector[i] << std::endl;
        }
    }
}

bool simpleSearch(int vector[TAM], int valueWanted, int *positionFound) {
    bool valueWasFound = false;
    for (int i = 0; i < TAM; i++) {
        if (vector[i] == valueWanted) {
            valueWasFound = true;
            *positionFound = i;
            break;
        }
    }
    return valueWasFound;
}

int main() {
    int vector[TAM] = {1,23,44,56,63,72,84,90,98};
    int valueWanted, positionFound;
    printVector(vector);
    std::cout << "What of this numbers you want the position: ";
    std::cin >> valueWanted;
    if (simpleSearch(vector, valueWanted, &positionFound) == true) {
        std::cout << "Value found in position: " << positionFound << std::endl;
    } else {
        std::cout << "Value not found." << std::endl;
    }
    return 0;
}