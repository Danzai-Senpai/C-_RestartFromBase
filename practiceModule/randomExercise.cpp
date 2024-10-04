# include <iostream>
# include <cstdlib>
# include <ctime>

int main() {

    srand(time(0));

    int dice1 = (rand() % 6) + 1;
    int dice2 = (rand() % 6) + 1;
    int dice3 = (rand() % 6) + 1;

    int sum = dice1 + dice2 + dice3;

    std::cout << "\nValores: " << dice1 << ", " << dice2 << ", " << dice3 << "\n";
    std::cout << "Resultado da Soma: " << sum << "\n\n";

    return 0;
}