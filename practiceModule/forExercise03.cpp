# include <iostream>

int main() {

    int initialValue, finalValue, intervalValue;

    std::cout << "\n\nWhats is the Initial Valor that you will choose: ";
    std::cin >> initialValue;
    std::cout << "\nWhats is the Final Valor that you will choose(This number need to be bigger than the before value): ";
    std::cin >> finalValue;
    std::cout << "\nWhat is the interval that you want: ";
    std::cin >> intervalValue;

    for (int i = initialValue; i <= finalValue; i+=intervalValue) {
        std::cout << i << "\n";
    }

}