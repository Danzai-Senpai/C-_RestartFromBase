# include <iostream>

void printVector(int *vector, int size) {
    int i;
    for (i = 0; i < size; i++) {
        std::cout << "Your vector is: " << vector[i] << std::endl;
    }
}

void modifyVector(int *vector, int size) {
    int i;
    for (i = 0; i < size; i++) {
        vector[i] = vector[i] + 1;
    }
}

int main() {

    int v[3] = {1, 2, 3};
    printVector(v, 3);
    modifyVector(v, 3);
    printVector(v, 3);

    return 0;

}