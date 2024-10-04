# include <iostream>

int main() {
    int num1, num2, option, result;

    std::cout << "\n\nInput 2 numbers: ";
    std::cin >> num1 >> num2;

    std::cout << "\n\nInput 1 to SUM\n";
    std::cout << "Input 2 to SUBTRACT\n";
    std::cout << "What is your Input?: ";
    std::cin >> option;

    switch(option) {
        case 1:
            result = num1 + num2;
            std::cout << "\nResult is: " << result << "\n\n\n";
            break;
        case 2:
            result = num1 - num2;
            std::cout << "\nResult is: " << result << "\n\n\n";
            break;
        default:
            std::cout << "\nInvalid Option" << "\n\n\n";
            break;
    }

}