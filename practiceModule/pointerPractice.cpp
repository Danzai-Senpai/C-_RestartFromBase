#include<iostream>

int main() {

    std::cout << std::endl;
    int arr[5] = {10, 80, 240, 60, 50};
    int* ptrArr = arr;

    for (int i = 0; i < 5; i++ ) {
        std::cout << "Pointer address is " << ptrArr << " and one of your content is " << *ptrArr << std::endl;
        ptrArr++; // That way we can go to the next element of pointer type.
    }

    std::cout << std::endl;
    int num1 = 4, num2 = 4;
    int* ptr_num1 = &num1;
    int* ptr_num2 = &num2;

    if (ptr_num1 == ptr_num2 && *ptr_num1 == *ptr_num2)
    {
        std::cout << "We have 2 elements with the same number and same address." << std::endl;
    } else if (ptr_num1 != ptr_num2 && *ptr_num1 == *ptr_num2) {
        std::cout << "We have 2 elements with the same number but with different address." << std::endl;
    } else if (ptr_num1 == ptr_num2 && *ptr_num1 != *ptr_num2) {
        std::cout << "We have 2 elements with the different numbers but with same address." << std::endl;
    } else {
        std::cout << "We have 2 elements with different numbers and different address." << std::endl;
    }

    std::cout << std::endl;

    int size;
    std::cout << "We will create a array, give me a size: ";
    std::cin >> size;

    int* newarr = new int(size);

    for (int i = 0; i < size; i++) {
        newarr[i] = i * size;
        std::cout << "Element " << i << ": " << newarr[i] << std::endl;
    }
    
}