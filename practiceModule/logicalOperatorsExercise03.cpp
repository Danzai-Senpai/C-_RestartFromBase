# include <iostream>

int main() {

    int num1, num2;
    std::cout << "\n\nInput Two numbers for I see if one of this numbers are pair: ";
    std::cin >> num1 >> num2;

    if ((num1 % 2 == 0) || (num2 % 2 == 0)) {
        std::cout << "\nOne or Two of your numbers are pair.\n\n\n";
    } else {
        std::cout << "\nYour numbers are not pair.\n\n\n";
    }

}