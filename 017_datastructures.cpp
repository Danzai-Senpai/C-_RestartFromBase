#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<set>
#include<map>

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
            std::cout << "Queue Test Below ------>\n\n";
            // Follow the order FIFO like a queue, if remove one element always will be the first to enter that will be removed first.

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

            std::cout << "Show the Element in the Front of the Queue After Change: " << cars.front() << "\n";
            std::cout << "Show the Element in the Back of the Queue After Change: " << cars.back() << "\n\n";

            cars.pop(); // Remove the element in the front of queue. (FIFO)

            std::cout << "Size of the Queue After Remove One Element: " << cars.size() << "\n";
            std::cout << "Show the Element in the Front of the Queue After Remove the Element: " << cars.front() << "\n\n";

        }

        void dequeTest() {

            std::cout << "\n\n";
            std::cout << "Deque Test Below ------>\n\n";
            // It is a queue with two finals, however, is more flexible, as elements can be added and removed from both ends at the front and the back.

            std::deque<std::string> cars = {"Volvo", "BMW", "Ford", "Mazda"}; // Can be accessed by index

            std::cout << "Accessed by Index: " << cars[1] << "\n";
            std::cout << "Accessed by Index: " << cars[2] << "\n\n";

            std::cout << "Size of the Dequeue: " << cars.size() << "\n";
            std::cout << "Accessed the Element in Front of the Dequeue: " <<  cars.front() << "\n";
            std::cout << "Accessed the Element in Back of the Dequeue: " <<  cars.back() << "\n\n";

            cars[0] = "Opel";
            cars.at(3) = "Tesla";

            std::cout << "Accessed the Element in Front of the Dequeue after Change: " <<  cars.at(0) << "\n";
            std::cout << "Accessed the Element in Front of the Dequeue after Change: " <<  cars.at(3) << "\n\n";

            cars.push_front("Tesla"); // Add Element in Front
            cars.push_back("VW"); // Add Element in Back

            std::cout << "Size of the Dequeue after Add Elements: " << cars.size() << "\n";
            std::cout << "Accessed the Element in Front of the Dequeue after Add Elements: " <<  cars.at(0) << "\n";
            std::cout << "Accessed the Element in Front of the Dequeue after Add Elements: " <<  cars.at(3) << "\n\n";

            cars.pop_front(); // Remove Element in Front
            cars.pop_back(); // Remove Element in Back

            std::cout << "Size of the Dequeue after Remove Elements: " << cars.size() << "\n";
            std::cout << "Accessed the Element in Front of the Dequeue after Remove Elements: " <<  cars.at(0) << "\n";
            std::cout << "Accessed the Element in Front of the Dequeue after Remove Elements: " <<  cars.at(3) << "\n\n";

            for (std::string car : cars) {
                std::cout << car << "\n";
            }

        }

        void setTests() {

            std::cout << "\n\n";
            std::cout << "Set Test Below ------>\n\n";
            // Sorted automatically in ascending order, unique valors (equal or duplicate values are ignored), can be added or removed but the value of an existing cannot be changed, cannot be accessed by index numbers because the order is based in sorting and not indexing.

            std::set<std::string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

            for (std::string car : cars) {
                std::cout << car << "\n";
            }

            std::cout << "\n";
            std::set<std::string, std::greater<std::string>> carsInvert = {"Volvo", "BMW", "Ford", "Mazda"};

            for (std::string car : carsInvert) {
                std::cout << car << "\n";
            }

            std::cout << "\n";
            std::cout << "Size of the Tests Before to Add Elements: " << cars.size() << "\n";
            cars.insert("Tesla");
            cars.insert("BMW");
            cars.insert("VW");
            cars.insert("Toyota");
            cars.insert("Audi");

            std::cout << "\n";
            std::cout << "Size of the Tests After to Add Elements: " << cars.size() << "\n";
            cars.erase("Volvo");
            cars.erase("Mazda");

            std::cout << "\n";
            std::cout << "Size of the Tests After to Remove Elements: " << cars.size() << "\n";
            std::cout << "\n";

            for (std::string car : cars) {
                std::cout << car << "\n";
            }

            std::cout << "\n";
            std::cout << "Check if the Set is Empty Before to Make the Clear (One Means Empty & Zero Means Not Empty): " << cars.empty() << "\n";
            std::cout << "Size of the Sets Before to Make the Clear: " << cars.size() << "\n";

            cars.clear();

            std::cout << "Check if the Set is Empty After to Make the Clear (One Means Empty & Zero Means Not Empty): " << cars.empty() << "\n";
            std::cout << "Size of the Sets After to Make the Clear: " << cars.size() << "\n";
            std::cout << "\n";

        }

        void setMaps() {

            std::cout << "\n\n";
            std::cout << "Map Test Below ------>\n\n";
            // Map store elements by pairs, key & value. Acessible by keys, not by index, and each key is unique. Sorted in ascending order by their keys.

            std::map<std::string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

            std::cout << "\n";
            std::cout << "Adele is: " << people.at("Adele") << "\n";
            std::cout << "Bo is: " << people.at("Bo") << "\n\n";

            std::cout << "John is(Before the Change): " << people.at("John") << "\n";
            people["John"] = 50;
            std::cout << "John is(After the Change): " << people.at("John") << "\n\n";

            std::cout << "Size of the Maps Before to Add Elements: " << people.size() << "\n";

            // Add new elements
            people.insert({"Jenny", 22});
            people.insert({"Liam", 24});
            people.insert({"Kasper", 20});
            people.insert({"Anja", 30});

            std::cout << "Size of the Maps After to Add Elements: " << people.size() << "\n";

            // Remove an element by key
            people.erase("John");

            std::cout << "Size of the Maps After to Remove One Elements: " << people.size() << "\n";
            std::cout << "Is Empty? Maps Before to Make the Clear: " << people.empty() << "\n\n";

            for (auto person : people) {
                std::cout << person.first << " is: " << person.second << "\n";
            }

            // Remove all elements
            std::cout << "\n";
            people.clear();
            std::cout << "Size of the Maps After to Clear Elements: " << people.size() << "\n";
            std::cout << "Is Empty? Maps After to Make the Clear: " << people.empty() << "\n\n";

        }

};

int main() {
    AllTests test1;

    test1.vectorTest();
    test1.listTest();
    test1.stackTest();
    test1.queueTest();
    test1.dequeTest();
    test1.setTests();
    test1.setMaps();

}