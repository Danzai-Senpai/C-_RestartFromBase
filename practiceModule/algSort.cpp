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

void bubbleSort(int vector[TAM]) {
    int aux;

    for (int x = 0; x < TAM; x++) {
        for (int y = x + 1; y < TAM; y++) {
            if (vector[x] > vector[y]) {
                aux = vector[x];
                vector[x] = vector[y];
                vector[y] = aux;
            }
        }
        printVector(vector);
    }
}

void insertionSort(int vector[TAM]) {
    int i, j, cardNow;
    for (i = 1; i < TAM; i++) {
        cardNow = vector[i];
        j = i - 1;

        while (j >= 0 && cardNow < vector[j]) {
            vector[j + 1] = vector[j];
            j = j - 1;
        }

        vector[j + 1] = cardNow;
        printVector(vector);
    }
}

void selectionSort(int vector[TAM]) {
    for (int i = 0; i < TAM; i++) {
        int min = i;
        for (int j = i + 1; j < TAM; j++) {
            if (vector[min] > vector[j]) {
                min = j;
            }
        }

        if (min != i) {
            int aux = vector[i];
            vector[i] = vector[min];
            vector[min] = aux;
        }

        printVector(vector);

    }
}

int main() {

    int testArr[TAM] = {7,8,9,4,5,6,1,2,3,0};

    std::cout << "\n\n";
    printVector(testArr);
    std::cout << "\n\n";

    selectionSort(testArr);

    std::cout << "\n\n";
    printVector(testArr);
    std::cout << "\n\n";

    return 0;

}