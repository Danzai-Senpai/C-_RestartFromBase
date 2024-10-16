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
            printVector(vector);
        }
        
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

void quickSort(int vector[TAM], int begin, int end) {
    int pivot, left, right, mid, aux;
    left = begin;
    right = end;

    mid = (int) ((left + right) / 2);
    pivot = vector[mid];

    std::cout<< std::endl << "Your Left Limit is the Number: " << vector[left] << std::endl;
    std::cout << "Your Pivot is the Number: " << pivot << std::endl;
    std::cout << "Your Right Limit is the Number: " << vector[right] << std::endl << std::endl;
    while (right > left) {
        while (vector[left] < pivot) {
            left = left + 1;
        }
        while (pivot < vector[right]) {
            right = right - 1;
        }
        if (left <= right) {
            aux = vector[right];
            vector[right] = vector[left];
            vector[left] = aux;
            left = left + 1;
            right = right -1;
        }
        printVector(vector);
    }
    if (begin < right) {
        quickSort(vector, begin, right);
    }
    if (left < end) {
        quickSort(vector, left, end);
    }
}

int main() {

    int testArr[TAM] = {7,8,9,4,5,6,1,2,3,0};

    std::cout << "\n\n";
    printVector(testArr);
    std::cout << "\n\n";

    //bubbleSort(testArr);
    //insertionSort(testArr);
    //selectionSort(testArr);
    quickSort(testArr, 0, TAM - 1);

    std::cout << "\n\n";
    printVector(testArr);
    std::cout << "\n\n";

    return 0;

}