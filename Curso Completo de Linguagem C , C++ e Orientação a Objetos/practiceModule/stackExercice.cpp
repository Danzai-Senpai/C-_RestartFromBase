#include<iostream>
#define TAM 10

void printVector(int vector[TAM], int *top) {
    for (int i = 0; i < *top; i++) {
        if (i < *top-1) {
            std::cout << vector[i] << " - ";
        } else {
            std::cout << vector[i] << std::endl;
        }
    }
}

void stackPush(int stack[TAM], int value, int *top) {
    if (*top == TAM - 1) {
        std::cout << "\nStack is Fulled!!!\n";
    } else {
        *top = *top + 1;
        stack[*top] = value;
    }
}

void stackPop(int stack[TAM], int *top) {
    int value = 0;
    if (*top < 0) {
        std::cout << "\nStack is Empty!!!\n";
    } else {
        stack[*top] = value;
        *top = *top - 1;
    }
}

bool stackIsEmpty(int stack[TAM], int *top) {
    if (*top == -1) {
        return true;
    } else {
        return false;
    }
}

int main() {

    int stack[TAM] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, top = -1, value;

    std::cout << "\nYou have a stack and this is empty, look below to see your stack." << std::endl;
    printVector(stack, &top);

    std::cout << "\nWhat is the value that you want put in your stack: ";
    std::cin >> value;

    if (stackIsEmpty(stack, &top)) {
        std::cout << "\nThis stack is empty.\n";
    } else {
        std::cout << "\nThis stack isn\'t empty.\n";
    }

    stackPush(stack, value, &top);
    stackPush(stack, value*2, &top);
    stackPush(stack, value*3, &top);
    stackPush(stack, value*4, &top);
    stackPush(stack, value*5, &top);
    stackPush(stack, value*6, &top);
    stackPush(stack, value*7, &top);
    stackPush(stack, value*8, &top);
    stackPush(stack, value*9, &top);
    stackPush(stack, value*10, &top);
    stackPush(stack, value*11, &top);

    std::cout << "\nNow your stack was updated, look below to see your new stack." << std::endl;
    printVector(stack, &top);

    
    stackPop(stack, &top);
    stackPop(stack, &top);
    stackPop(stack, &top);
    stackPush(stack, value*11, &top);

    if (stackIsEmpty(stack, &top)) {
        std::cout << "\nThis stack is empty.\n";
    } else {
        std::cout << "\nThis stack isn\'t empty.\n";
    }

    std::cout << "\nNow your stack was updated, look below to see your new stack." << std::endl;
    printVector(stack, &top);

}