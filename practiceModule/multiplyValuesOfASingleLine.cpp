# include <iostream>

int main() {

    float num1, num2, num3, result;

    std::cout << "Digite 3 Numeros: ";
    std::cin >> num1 >> num2 >> num3;

    result = num1 * num2 * num3;

    std::cout << "The result is: " << result;
}