# include <iostream>
# include <cmath>

int main() {

    double x, y, subtration, absValue;

    std::cout << "Insert a number: ";
    std::cin >> x;
    std::cout << "Insert another number: ";
    std::cin >> y;

    absValue = std::abs(x-y);

    std::cout << "Your absolute value is: " << absValue;

}