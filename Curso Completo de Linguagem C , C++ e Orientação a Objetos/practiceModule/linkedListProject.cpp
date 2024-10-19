#include<iostream>
#include<stdlib.h>

struct People {
    std::string name;
    int rg;
    struct People *nextPeople;
};

void cleanScreen() {
    system("CLS");
}

int returnSize(People *linkedListPeople) {
    
    int size = 0;
    People* p = linkedListPeople;

    if (p->name == "") {
        return 0;
    } else {
        while (p != NULL) {
            p = p->nextPeople;
            size++;
        }
        return size;
    }
    
}

void printLinkedList(People *linkedListPeople) {
    People* p = linkedListPeople;
    int i = 1;
    while (p != NULL) {
        std::cout << "| " << i << " | Name: " << p->name << " | RG: " << p->rg << " |\n";
        p = p->nextPeople;
        i++;
    }
}

void addToBeginOfLinkedList(People *&linkedListPeople, std::string name, int rg) {

    People* newPeople = new People;
    newPeople->name = name;
    newPeople->rg = rg;
    newPeople->nextPeople = linkedListPeople;

    if (linkedListPeople->name == "") {
        newPeople->nextPeople = NULL;
    } else {
        newPeople->nextPeople = linkedListPeople;
    }

    linkedListPeople = newPeople;

}

void removeToBeginOfLinkedList(People *&linkedListPeople) {

    if (linkedListPeople->nextPeople == NULL) {
        People* newList = new People;
        newList->name = "";
        newList->rg = 0;
        newList->nextPeople = NULL;
        linkedListPeople = newList;
    } else {
        linkedListPeople = linkedListPeople->nextPeople;
    }

}

void addToEndOfLinkedList(People *&linkedListPeople, std::string name, int rg) {

    People* newPeople = new People;
    newPeople->name = name;
    newPeople->rg = rg;
    newPeople->nextPeople = NULL;

    People* auxList = linkedListPeople;

    while (auxList != NULL) {
        if (auxList->nextPeople == NULL) {
            auxList->nextPeople = newPeople;
            return;
        }
        auxList = auxList->nextPeople;
    }
}

void removeToEndOfLinkedList(People *&linkedListPeople) {

    People* newLinkedList = linkedListPeople;
    People* auxLinkedList = new People;

    while (newLinkedList->nextPeople != NULL) {
        auxLinkedList = newLinkedList;
        newLinkedList = newLinkedList->nextPeople;
    }

    auxLinkedList->nextPeople == NULL;

}

void addToNOfLinkedList(People *&linkedListPeople, std::string name, int rg, int position) {
    
    People* newPeople = new People;
    newPeople->name = name;
    newPeople->rg = rg;
    newPeople->nextPeople = NULL;

    People* auxList = linkedListPeople;

    int i = 0;

    while (i <= position) {
        if (i == position - 1) {
            People* auxList1 = new People;
            auxList1->nextPeople = auxList->nextPeople;
            auxList->nextPeople = newPeople;
            newPeople->nextPeople = auxList1->nextPeople;
            free(auxList1);
        }
        auxList = auxList + 1;
        i++;
    }

}

int main() {

    int functionChoosed = 1, rg, position;
    std::string name;

    People* linkedListPeople = new People;
    linkedListPeople->name = "";
    linkedListPeople->rg = 0;
    linkedListPeople->nextPeople = NULL;

    People* newFirstValue = new People;
    newFirstValue->name = "Marcus";
    newFirstValue->rg = 123;
    newFirstValue->nextPeople = NULL;

    linkedListPeople = newFirstValue;

    while (functionChoosed < 9 && functionChoosed > 0) {
        std::cout << "\nSize of List: " << returnSize(linkedListPeople) << "\n\n";

        if (returnSize(linkedListPeople) == 0) {
            std::cout << "| Empty List |\n";
        } else {
            printLinkedList(linkedListPeople);
        }

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

        switch (functionChoosed) {
            case 1:
                std::cout << "\nYou choose the option: 1 - Insertion of a Node in the Begin of the List.\n\n";

                std::cout << "Type a Name: ";
                std::cin >> name;
                std::cout << "Type a RG: ";
                std::cin >> rg;

                addToBeginOfLinkedList(linkedListPeople, name, rg);
                break;
            
            case 2:
                std::cout << "\nYou choose the option: 2 - Insertion of a Node in the End of the List.\n\n";

                std::cout << "Type a Name: ";
                std::cin >> name;
                std::cout << "Type a RG: ";
                std::cin >> rg;

                if (returnSize(linkedListPeople) == 0) {
                    addToBeginOfLinkedList(linkedListPeople, name, rg);
                } else {
                    addToEndOfLinkedList(linkedListPeople, name, rg);
                }
                break;

            case 3:
                std::cout << "\nYou choose the option: 3 - Insertion of a Node in some Position of the List.\n\n";

                std::cout << "Type a Name: ";
                std::cin >> name;
                std::cout << "Type a RG: ";
                std::cin >> rg;
                std::cout << "Type a Position: ";
                std::cin >> position;

                if (position - 1 == 0) {
                    addToBeginOfLinkedList(linkedListPeople, name, rg);
                } else if (position - 1 == returnSize(linkedListPeople) - 1) {
                    addToEndOfLinkedList(linkedListPeople, name, rg);
                } else {
                    addToNOfLinkedList(linkedListPeople, name, rg, position - 1);
                }
                break;

            case 4:
                removeToBeginOfLinkedList(linkedListPeople);
                break;

            case 5:
                removeToEndOfLinkedList(linkedListPeople);
                break;
        }
    }

    return 0;

}