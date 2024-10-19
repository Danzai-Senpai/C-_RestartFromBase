# include <iostream>

int main() {

    int size, cont;
    std::cout << "Put the size of the vector: ";
    std::cin >> size;

    int *vector = new int[size];

    for (cont = 0; cont < size; cont++) {
        vector[cont] = cont;
        std::cout << "In Index " << vector[cont] << " of this vector the content is: " << vector[cont] << std::endl;

    }

    delete[] vector; // É uma boa pratica limpar a memoria alocada

    return 0;

}