# include <iostream>

int main() {
    float n1, n2, result;
    std::cout << "Write 2 numbers(n1 n2): ";
    std::cin >> n1 >> n2;

    result = n1 + n2;
    if (result >= 10) {
        std::cout << "The number is " << result << " an this number is greater or equal to 10.";
    } else {
        std::cout << "The number is " << result << " an this number is smaller than 10.";
    }
}