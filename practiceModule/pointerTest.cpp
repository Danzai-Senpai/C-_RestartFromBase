# include <iostream>

int main() {

    int num = 10;
    int* ptr = &num;

    std::cout << "Value of X: " << num << std::endl;
    std::cout << "Adress of X: " << &num << std::endl;
    std::cout << "Value Storaged in PTR: " << ptr << std::endl;
    std::cout << "Value Aponted by PTR: " << *ptr << std::endl;

    *ptr = 20;
    std::cout << "New value of X: " << num << std::endl;
    
}