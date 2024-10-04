# include <iostream>

int main() {

    int num1, num2, num3;

    std::cout << "\n\nWrite 3 numbers for me and I say if the 3 numbers are greater than 10: ";
    std::cin >> num1 >> num2 >> num3;

    if (num1 > 10 && num2 > 10 && num3 > 10) {
        std::cout << "\nYour numbers is greater than 10.\n\n\n";
    } else {
        std::cout << "\nYour numbers is not greater than 10.\n\n\n";
    }
}