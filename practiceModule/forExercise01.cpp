# include <iostream>

int main() {

    std::cout << "\n\n";
    int number, sum = 0;

    for (int number = 0; number < 10; number++) {
        std::cout << sum << " + " << number << " = ";
        sum += number;
        std::cout << sum << "\n";
    }

    std::cout << "\n\nTotal Sum: " << sum << "\n\n\n";

    return 0;

}