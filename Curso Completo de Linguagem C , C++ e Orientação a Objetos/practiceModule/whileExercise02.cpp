# include <iostream>

int main() {

    int num1 = 10;
    int num2;

    std::cout << "Digite um numero maior que 10 e eu vou lhe falar os numeros de 0 a 10 ate la: ";
    std::cin >> num2;
    std::cout << "\n";

    while (num1 <= num2) {

        if (num1 % 2 == 0) {
            std::cout << num1 << "\n";
        }

        num1 += 1;

    }

    std::cout << "\n";

    return 0;

}