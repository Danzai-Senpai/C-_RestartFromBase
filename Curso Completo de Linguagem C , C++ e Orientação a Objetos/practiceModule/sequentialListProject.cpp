#include<iostream>
#include<string>
#include<stdlib.h>

struct People
{
    std::string name;
    int rg;
};


void cleanScreen() {
    system("CLS");
}

void printSequential(People *pointerSequential, int sizeOfList) {
    for (int i = 0; i < sizeOfList; i++) {
        std::cout<< " | " << i + 1 << " | " << pointerSequential[i].name << " - " << pointerSequential[i].rg << std::endl;
    }
}

void addToBeginSequential(People *&pointerSequential, int *sizeOfList, std::string name, int rg) {

    if (*sizeOfList == 0) {
        People* newListSequential = new People[1];
        newListSequential[0].name = name;
        newListSequential[0].rg = rg;

        pointerSequential = newListSequential;
        
    } else {

        People* newListSequential = new People[*sizeOfList + 1];
        
        newListSequential[0].name = name;
        newListSequential[0].rg = rg;
        
        for (int i = 0; i < *sizeOfList; i++) {
            newListSequential[i + 1].name = pointerSequential[i].name;
            newListSequential[i + 1].rg = pointerSequential[i].rg;
        }
        
        delete[] pointerSequential;
        pointerSequential = newListSequential;
        
    }

    *sizeOfList = *sizeOfList + 1;

}

void removeBeginSequential(People *&pointerSequential, int *sizeOfList) {
    if (*sizeOfList > 0) {
        People* newListSequential = new People[*sizeOfList - 1];
        for (int i = 0; i < *sizeOfList - 1; i++) {
            newListSequential[i].name = pointerSequential[i+1].name;
            newListSequential[i].rg = pointerSequential[i+1].rg;
        }

        delete[] pointerSequential;
        pointerSequential = newListSequential;
        *sizeOfList = *sizeOfList - 1;
    }
}

void addToEndSequential(People *&pointerSequential, int *sizeOfList, std::string name, int rg) {
    
    if (*sizeOfList == 0) {

        People* newListSequential = new People[1];
        newListSequential[0].name = name;
        newListSequential[0].rg = rg;
        delete[] pointerSequential;
        pointerSequential = newListSequential;

    } else {

        People* newListSequential = new People[*sizeOfList + 1];

        for (int i = 0; i < *sizeOfList; i++) {
            newListSequential[i].name = pointerSequential[i].name;
            newListSequential[i].rg = pointerSequential[i].rg;
        }

        newListSequential[*sizeOfList].name = name;
        newListSequential[*sizeOfList].rg = rg;
        
        delete[] pointerSequential;
        pointerSequential = newListSequential;

    }

    *sizeOfList = *sizeOfList + 1;

}

void removeEndSequential(People *&pointerSequential, int *sizeOfList) {
    if (*sizeOfList > 0) {

        People* newListSequential = new People[*sizeOfList - 1];

        for (int i = 0; i < *sizeOfList - 1; i++) {
            newListSequential[i].name = pointerSequential[i].name;
            newListSequential[i].rg = pointerSequential[i].rg;
        }

        pointerSequential = newListSequential;
        *sizeOfList = *sizeOfList - 1;

    }
}

void addToPositionSequential(People *&pointerSequential, int *sizeOfList, std::string name, int rg, int position) {
    
    People* newListSequential = new People[*sizeOfList + 1];
    
    for (int i = 0; i < position; i++) {
        newListSequential[i].name = pointerSequential[i].name;
        newListSequential[i].rg = pointerSequential[i].rg;
    }
    
    newListSequential[position].name = name;
    newListSequential[position].rg = rg;
    
    for (int i = position + 1; i < *sizeOfList + 1; i++) {
        newListSequential[i].name = pointerSequential[i - 1].name;
        newListSequential[i].rg = pointerSequential[i - 1].rg;
    }
    
    delete[] pointerSequential;
    pointerSequential = newListSequential;
    *sizeOfList = *sizeOfList + 1;

}

void removeFromPositionSequential(People *&pointerSequential, int *sizeOfList, int position) {
    if (*sizeOfList > 1 && position <= *sizeOfList) {
        
        position = position - 1;
        People* newListSequential = new People[*sizeOfList - 1];

        for (int i = 0, j = 0; i < *sizeOfList; i++) {
            if (i != position) {
                newListSequential[j].name = pointerSequential[i].name;
                newListSequential[j].rg = pointerSequential[i].rg;
                j++;
            }
        }

        delete[] pointerSequential;
        pointerSequential = newListSequential;
        *sizeOfList = *sizeOfList - 1;

    } else if (*sizeOfList == 1) {

        removeBeginSequential(pointerSequential, sizeOfList);

    }

}

std::string returnNamebyRG(People *&pointerSequential, int *sizeOfList, int rg) {
    std::string name = "Unvailable";
    for (int i = 0; i < *sizeOfList; i++) {
        if (pointerSequential[i].rg == rg) {
            name = pointerSequential[i].name;
        }
    }
    return name;
}

int main() {

    int functionChoosed = 1;
    std::string name;
    int rg;
    int position;

    People* pointerSequential = nullptr;

    int sizeOfList = 0;

    /*People* exListSequential = new People[sizeOfList];
    exListSequential[0].name = "Marcus";
    exListSequential[0].rg = 123;
    exListSequential[1].name = "Johnny";
    exListSequential[1].rg = 321;

    pointerSequential = exListSequential;*/
 
    while (functionChoosed < 9) {

        std::cout << std::endl;
        printSequential(pointerSequential, sizeOfList);

        std::cout << "\n| Operations |\n\n";
        std::cout << "1 - Insertion of a Node in the Begin of the List.\n";
        std::cout << "2 - Insertion of a Node in the End of the List.\n";
        std::cout << "3 - Insertion of a Node in some Position of the List.\n";
        std::cout << "4 - Remove a Node in the Begin of the List.\n";
        std::cout << "5 - Remove a Node in the End of the List.\n";
        std::cout << "6 - Remove a Node in some Position of the List.\n";
        std::cout << "7 - Search for a node with the field RG.\n";
        std::cout << "8 - Print the list\n";
        std::cout << "9 - Exit from the System\n";
        std::cout << "\nChoose a number and press ENTER: ";
        std::cin >> functionChoosed;
        
        cleanScreen();

        printSequential(pointerSequential, sizeOfList);

        switch (functionChoosed) {
            case 1:
                std::cout << "\nFunction Choosed is: 1 - Insertion of a Node in the Begin of the List.\n\n";
                std::cout << "Write a Name: ";
                std::cin >> name;
                std::cout << "Write the RG: ";
                std::cin >> rg;
                
                addToBeginSequential(pointerSequential, &sizeOfList, name, rg);
                break;

            case 2:
                std::cout << "\nFunction Choosed is: 2 - Insertion of a Node in the End of the List.\n\n";
                std::cout << "Write a Name: ";
                std::cin >> name;
                std::cout << "Write the RG: ";
                std::cin >> rg;

                if (sizeOfList == 0) {
                    addToBeginSequential(pointerSequential, &sizeOfList, name, rg);
                } else {
                    addToEndSequential(pointerSequential, &sizeOfList, name, rg);
                }
                break;
                
            case 3:
                std::cout << "\nFunction Choosed is: 2 - Insertion of a Node in the End of the List.\n\n";
                std::cout << "Write a Name: ";
                std::cin >> name;
                std::cout << "Write the RG: ";
                std::cin >> rg;
                std::cout << "You want to add this in which position: ";
                std::cin >> position;

                if (sizeOfList == 0) {
                    addToBeginSequential(pointerSequential, &sizeOfList, name, rg);
                } else if (position == sizeOfList) {
                    addToBeginSequential(pointerSequential, &sizeOfList, name, rg);
                } else {
                    addToPositionSequential(pointerSequential, &sizeOfList, name, rg, position);
                }
                break;

            case 4:
                removeBeginSequential(pointerSequential, &sizeOfList);
                break;

            case 5:
                removeEndSequential(pointerSequential, &sizeOfList);
                break;

            case 6:
                std::cout << "\nFunction Choosed is: 6 - Remove a Node in some Position of the List.\n\n";
                std::cout << "You want to remove the element from which position: ";
                std::cin >> position;
                removeFromPositionSequential(pointerSequential, &sizeOfList, position);
                break;

            case 7:
                std::cout << "\nFunction Choosed is: 7 - Search for a node with the field RG.\n\n";
                if (sizeOfList == 0) {
                    std::cout << "\nEmpty List\n";
                } else {
                    std::cout << "Type a RG: ";
                    std::cin >> rg;

                    std::cout << "\nName of RG " << rg << ": " << returnNamebyRG(pointerSequential, &sizeOfList, rg) << std::endl;
                }
                break;

            case 8:
                printSequential(pointerSequential, sizeOfList);
                break;

        }

        
    }

    delete[] pointerSequential;
    return 0;

}