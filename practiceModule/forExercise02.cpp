# include <iostream>

int main() {

    int number;
    int result;

    std::cout << "\n\n";
    std::cout << "Escolha o numero de qual tabuada voce quer aprender: ";
    std::cin >> number;
    std::cout << "\n\n";

    for (int i = 0; i <= 10; i++) {
        result = number * i;
        std::cout << number << " x " << i << " = " << result << "\n";
    }

    std::cout << "\n\n";

    return 0;
    
}