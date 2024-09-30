#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>

class AllTests {
    public:

        void vectorTest() {
            std::cout << "\n\n";
            std::cout << "Vectors Test Below ------>\n\n";
            
            std::vector<std::string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
            
            for (std::string car : cars) {
                std::cout << car << "\n";
            }
            
            std::cout << "\n";
            std::cout << "Index 1: " << cars.at(1) << "\n"; 
            std::cout << "Index 2: " << cars[2] << "\n\n";
            
            std::cout << "First Element: " << cars.front() << "\n";
            std::cout << "Last Element: " << cars.back() << "\n\n";
            
            cars.at(1) = "Tesla";
            std::cout << "Index 1 after Change: " << cars.at(1) << "\n\n";
            
            cars.push_back("Opel"); 
            std::cout << "Last Element after Add Element: " << cars.back() << "\n\n";
            
            cars.pop_back();
            std::cout << "Last Element after Remove the Last Element: " << cars.back() << "\n\n";
            
            std::cout << "Size of Vector Now: " << cars.size() << "\n\n";
            
            std::cout << cars.empty() << "\n\n";
            
            for (std::string car : cars) {
                std::cout << car << "\n";
            }
        }

        void listTest() {
            
            std::cout << "\n\n";
            std::cout << "List Test Below ------>\n\n";
            
            std::list<std::string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
            
            for (std::string car : cars) {
                std::cout << car << "\n";
            }
            
            std::cout << "\n";
            std::cout << cars.front() << "\n"; 
            std::cout << cars.back() << "\n\n";
            
            cars.push_front("Tesla"); 
            cars.push_back("Toyota"); 
            
            for (std::string car : cars) {
                std::cout << car << "\n";
            }
            
            std::cout << "\n";
            
            cars.pop_front(); 
            cars.pop_back(); 
            
            for (std::string car : cars) {
                std::cout << car << "\n";
            }
            
            std::cout << "\n";
            std::cout << "Size of the List Now: " << cars.size() << "\n\n";
        }

        void stackTest() {
            
            std::cout << "\n\n";
            std::cout << "Stack Test Below ------>\n\n";
            // Follow the order LIFO like a stack, if remove one element always will be the last that was be added.

            std::stack<std::string> cars;

            // Add elements to the stack (You cant add elements in the moment of declaration)
            cars.push("Volvo");
            cars.push("BMW");
            cars.push("Ford");
            cars.push("Mazda");

            std::cout << "Show the Element in the Top of the Stack: " << cars.top() << "\n\n";

            cars.top() = "Tesla"; // Change element in the top of stack

            std::cout << "Size of the Stack: " << cars.size() << "\n";
            std::cout << "Show the Element in the Top of the Stack after Change: " << cars.top() << "\n\n";

            cars.pop(); // Remove the element in the top of stack. (LIFO)

            std::cout << "Size of the Stack after Remove the Element: " << cars.size() << "\n";
            std::cout << "Show the Element in the Top of the Stack after Remove the Top Element of the Stack: " << cars.top() << "\n\n";
        }

        void queueTest() {
            std::cout << "\n\n";
            std::cout << "Stack Test Below ------>\n\n";
            // Follow the order FIFO like a stack, if remove one element always will be the last that was be added.

            std::queue<std::string> cars;
            
            // Add elements to the stack (You cant add elements in the moment of declaration)
            cars.push("Volvo");
            cars.push("BMW");
            cars.push("Ford");
            cars.push("Mazda");

            std::cout << "Size of the Queue: " << cars.size() << "\n";
            std::cout << "Show the Element in the Front of the Queue: " << cars.front() << "\n";
            std::cout << "Show the Element in the Back of the Queue: " << cars.back() << "\n\n";

            cars.front() = "Tesla"; // Change element in the front of queue
            cars.back() = "VW"; // Change element in the back of queue

            std::cout << "Show the Element in the Front of the Queue After Change: " << cars.front() << "\n\n";
            std::cout << "Show the Element in the Back of the Queue After Change: " << cars.back() << "\n\n";

            cars.pop(); // Remove the element in the front of queue. (FIFO)

            std::cout << "Size of the Queue After Remove One Element: " << cars.size() << "\n";
            std::cout << "Show the Element in the Front of the Queue After Remove the Element: " << cars.front() << "\n\n";
        }

};

int main() {
    AllTests test1;

    test1.vectorTest();
    test1.listTest();
    test1.stackTest();
    test1.queueTest();
}