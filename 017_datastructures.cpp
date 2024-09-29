#include<iostream>
#include<vector>
#include<list>
#include<set>
#include<map>
#include<stack>
#include<queue>

using namespace std;

int main() {
    /*
    cout << "\n\n";
    cout << "Vectors Test Below ------>\n\n";
    // Dinamic size and can have elements of the same type. Can access random elements by indice but can add and remove only the last element of the vector.
    
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    for (string car : cars) {
        cout << car << "\n";
    }

    // Ways to access by Index in vectors
    cout << "\n";
    cout << "Index 1: " << cars.at(1) << "\n"; // Recommended Way
    cout << "Index 2: " << cars[2] << "\n\n";

    cout << "First Element: " << cars.front() << "\n"; // Get the first element
    cout << "Last Element: " << cars.back() << "\n\n"; // Get the last element 

    // Change the value of one element
    cars.at(1) = "Tesla";
    cout << "Index 1 after Change: " << cars.at(1) << "\n\n";

    cars.push_back("Opel"); // Add element to the vector
    cout << "Last Element after Add Element: " << cars.back() << "\n\n"; // Get the last element

    cars.pop_back();
    cout << "Last Element after Remove the Last Element: " << cars.back() << "\n\n"; // Get the last element

    cout << "Size of Vector Now: " << cars.size() << "\n\n";

    cout << cars.empty() << "\n\n"; // Check if the vector is empty, return 0 means no

    for (string car : cars) {
        cout << car << "\n";
    }
    */


    cout << "\n\n";
    cout << "List Test Below ------>\n\n";
    // Dinamic size and can have elements of the same type. Can't access random elements by indice but can add and remove the first and the last element of the vector.

    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    for (string car : cars) {
        cout << car << "\n";
    }

    cout << "\n";
    cout << cars.front() << "\n"; // Get the first element
    cout << cars.back() << "\n\n"; // Get the last element

    cars.push_front("Tesla"); // Add an element at the beginning
    cars.push_back("Toyota"); // Add an element at the end

    for (string car : cars) {
        cout << car << "\n";
    }

    cout << "\n";
    
    cars.pop_front(); // Remove the first element
    cars.pop_back(); // Remove the last element

    for (string car : cars) {
        cout << car << "\n";
    }

    cout << "\n";

    cout << "Size of the List Now: " << cars.size() << "\n\n";
}