# include <iostream>

int main() {

    float num1, num2, result;

    std::cout << "Write 2 numbers for I see what number is greater or if them is equal: ";
    std::cin >> num1 >> num2;

    if ( num1 == num2) {
        std::cout << "Your numbers are equal.";
    } else if (num1 > num2) {
        std::cout << num1 << " is greater than " << num2 << ".";
    } else {
        std::cout << num2 << " is greater than " << num1 << ".";
    }

}