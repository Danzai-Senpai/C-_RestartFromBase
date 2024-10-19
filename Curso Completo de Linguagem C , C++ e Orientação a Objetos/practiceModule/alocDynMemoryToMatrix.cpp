#include <iostream>
#include <new>

int main() {

    int lines= 3, cols = 3, i, j;
    int **matriz;

    std::cout << "Write the quantity of lines of your Matriz: ";
    std:: cin >> lines;
    std::cout << "Write the quantity of cols of your Matriz: ";
    std:: cin >> cols;

    matriz = (int **) new int[lines]; //Alocar memorias para as linhas

    for ( i = 0; i < lines; i++ ) {
        matriz[i] = (int *) new int(cols); //Alocar memorias para as colunas de cada linha
    }

    for ( i = 0; i < lines; i++ ) {
        for ( j = 0; j < cols; j++ ) {
            matriz[i][j] = i;
            std::cout << matriz[i][j];
        }
        std::cout << std::endl;
    }

}