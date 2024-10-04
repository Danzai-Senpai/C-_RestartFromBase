# include <iostream>

int main() {
    std::cout << "\n\n";
    int num1;

    std::cout << "Write the number that you want to check if is pair or not: ";
    std::cin >> num1;

    if (num1 % 2 == 0) {
        std::cout << "Your number is pair.\n\n";
    } else {
        std::cout << "Your number is not pair.\n\n";
    }

}