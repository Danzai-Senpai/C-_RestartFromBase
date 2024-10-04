# include <iostream>

int main() {

    int num1;

    std::cout << "\n\n";
    std::cout << "Input one Number: ";
    std::cin >> num1;
    std::cout << "\n";

    if (num1 > 0 && num1 < 10) {
        std::cout << "This number is between 0 and 10.\n\n\n";
    } else {
        std::cout << "This number is not between 0 and 10.\n\n\n";
    }
}