#include<iostream>
#include<string>
#include<new>

struct Fruit {
    std::string fruitColor;
    std::string fruitName;
};


int main() {

    std::cout << std::endl;
    Fruit *ptrFirstFruit = new Fruit;
    ptrFirstFruit->fruitColor = "Yellow";
    ptrFirstFruit->fruitName = "Banana";
    std::cout << "I have a " << ptrFirstFruit->fruitName << " and your color is " << ptrFirstFruit->fruitColor << "." << std::endl;

    std::cout << std::endl;
    Fruit *ptrFruitList = new Fruit[2];

    ptrFruitList[0].fruitColor = "Red";
    ptrFruitList[1].fruitColor = "Red";
    ptrFruitList[0].fruitName = "Strawberry";
    ptrFruitList[1].fruitName = "Kiwi";

    for (int i = 0; i < 2; i++)
    {
        std::cout << "I have a " << ptrFruitList[i].fruitName << " and your color is " << ptrFruitList[i].fruitColor << "." << std::endl;
    }

    std::cout << std::endl;
    return 0;
    
}