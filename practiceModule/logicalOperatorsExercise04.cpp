# include <iostream>

int main() {

    int num1, num2, sum;
    std::cout << "\n\nInput Two Number for me please: ";
    std::cin >> num1 >> num2;
    sum = num1 + num2;

    if (((num1 > 0) && (num2 < 10)) || (sum % 2 == 0)) {
        std::cout << "\nYour numbers are between 0 AND 10 OR your sum are pair.\n\n\n";
    } else {
        std::cout << "\nYour numbers are not between 0 AND 10 AND your sum are not pair.\n\n\n";
    }
}