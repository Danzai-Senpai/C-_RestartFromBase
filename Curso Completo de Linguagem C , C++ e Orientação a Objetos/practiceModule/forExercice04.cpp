#include <iostream>

int main() {
    int num1, num2;
    
    std::cin >> num1 >> num2;
    
    for (int i = num1; i <= num2; i++) {
        if (i >= 1 && i <= 9) {
            switch (i) {
                case 1:
                    std::cout << "one" << std::endl;
                    break;
                case 2:
                    std::cout << "two" << std::endl;
                    break;
                case 3:
                    std::cout << "three" << std::endl;
                    break;
                case 4:
                    std::cout << "four" << std::endl;
                    break;
                case 5:
                    std::cout << "five" << std::endl;
                    break;
                case 6:
                    std::cout << "six" << std::endl;
                    break;
                case 7:
                    std::cout << "seven" << std::endl;
                    break;
                case 8:
                    std::cout << "eight" << std::endl;
                    break;
                case 9:
                    std::cout << "nine" << std::endl;
                    break;
            }
        } else {
            if (i % 2 == 0) {
                std::cout << "even" << std::endl;
            } else {
                std::cout << "odd" << std::endl;
            }
        }
    }
    
    return 0;
}