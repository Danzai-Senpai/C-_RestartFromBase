# include <iostream>

int main() {

    int num1 = 0;
    int num2 = 0;

    while (!(num1 > 5 && num1 < 10) || !(num2 > 5 && num2 < 10)) {

        std::cout << "\nDigite valores entre 5 e 10.\n";
        std::cout << "\nDigite um numero: ";
        std::cin >> num1;
        std::cout << "\nDigite outro numero: ";
        std::cin >> num2;

    }

    int sum = num1 + num2;

    std::cout << "\n\nSoma: " << sum;
    return 0;

}