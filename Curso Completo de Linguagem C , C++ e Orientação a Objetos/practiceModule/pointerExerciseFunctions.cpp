# include <iostream>

int returnWithMoreTen(int num) {
    return num + 10;
}

void addMoreTen(int *num) {
    *num = *num + 10;
}

int main() {

    int a = 5;
    std::cout << "Your value is: " << a << std::endl;
    std::cout << "Your value adress is: " << &a << std::endl;

    a = returnWithMoreTen(a);
    std::cout << "Your new value is: " << a << std::endl;
    std::cout << "Your new value adress is: " << &a << std::endl;

    addMoreTen(&a);
    std::cout << "Your new value is: " << a << std::endl;
    std::cout << "Your new value adress is: " << &a << std::endl;

    return 0;

}