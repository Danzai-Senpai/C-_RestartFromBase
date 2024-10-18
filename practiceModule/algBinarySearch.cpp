#include<iostream>
#define TAM 10

void printVector(int vector[TAM]) {
    for (int i = 0; i < TAM; i++) {
        if (i < (TAM-1)) {
            std::cout << vector[i] << " - ";
        } else {
            std::cout << vector[i] << std::endl;
        }
    }
}

bool binarySearch(int vector[TAM], int valueWanted, int *positionFound) {

    int leftLimit = 0, rightLimit = TAM-1, mid;
    bool valueWasFound = false;

    while (leftLimit <= rightLimit) {

        mid = (leftLimit+rightLimit)/2;

        if (vector[mid] == valueWanted) {

            *positionFound = mid;
            valueWasFound = true;
            break;

        } else if (vector[mid] < valueWanted) {

            leftLimit = mid + 1;

        } else {

            rightLimit = mid - 1;

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
    if (binarySearch(vector, valueWanted, &positionFound) == true) {
        std::cout << "Value found in position: " << positionFound << std::endl;
    } else {
        std::cout << "Value not found." << std::endl;
    }
    return 0;
}