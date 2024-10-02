#include<iostream>
#include<vector>
#include<algorithm>

class myTests {
    public:
        void iterationTest() {

            // Iterator are Another Name to a Loop
            std::vector<std::string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
        
            /*
            std::cout << "\n";
            for (auto it = cars.begin(); it != cars.end(); ++it) {
                std::cout << *it << "\n";
            }

            std::cout << "\n";
            for (auto it = cars.begin() + 1; it != cars.end(); ++it) {
                std::cout << *it << "\n";
            }
        
            std::cout << "\n";
            for (auto it = cars.begin() + 2; it != cars.end(); ++it) {
                std::cout << *it << "\n";
            }
        
            std::cout << "\n";
            for (auto it = cars.begin(); it != cars.end() - 1; ++it) {
                std::cout << *it << "\n";
            }
        
            std::cout << "\n";
            for (auto it = cars.begin(); it != cars.end() - 2; ++it) {
                std::cout << *it << "\n";
            }
        
            std::cout << "\n";
            for (auto it = cars.begin(); it != cars.end(); ++it) {
                std::cout << *it << "\n";
            }
            */
       
            for (std::string car : cars) {
                std::cout << car << "\n";
            } // To Read Elements the Loop For-Each is Much More Simple & Clean than Iterators.
        
            for (auto it = cars.begin(); it != cars.end(); ) {
                if (*it == "BMW") {
                    it = cars.erase(it); // Remove The BMW Element
                } else {
                    ++it;
                }
            } // When you need to add, remove and modify elements the Iterations is a Better Option
        
            std::cout << "\n";
            for (const std::string& car : cars) {
                std::cout << car << "\n";
            }
        
            std::cout << "\n";
            for (auto it = cars.rbegin(); it != cars.rend(); ++it) {
                std::cout << *it << "\n";
            }

        }

        void ordenationAlgorithmTest() {
            
            std::vector<std::string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

            std::cout << "\n";
            sort(cars.begin(), cars.end()); // Sort for Alphabetical Order
            for (std::string car : cars) {
                std::cout << car << "\n";
            }

            std::cout << "\n";
            sort(cars.rbegin(), cars.rend()); // Sort for Alphabetical Order Inverted
            for (std::string car : cars) {
                std::cout << car << "\n";
            }

            std::cout << "\n";
            sort(cars.begin() + 1, cars.end());
            for (std::string car : cars) {
                std::cout << car << "\n";
            }

        }

        void searchAlgorithmTest() {

            std::vector<int> numbers = {1, 7, 3, 5, 9, 2};

            /*
            auto it = find(numbers.begin(), numbers.end(), 3); // Search for the Number 3
            auto it = upper_bound(numbers.begin(), numbers.end(), 5); // Find the First Value Greater Than 5
            auto it = min_element(numbers.begin(), numbers.end()); // Find the Smallest Element in the Vector
            auto it = max_element(numbers.begin(), numbers.end()); // Find the Largest Element in the Vector
            */

        }

        void modifyingAlgorithms() {

            std::vector<int> numbers = {1, 7, 3, 5, 9, 2};
            std::vector<int> copiedNumbers(6); // Create a vector called copiedNumber that should store 6 intergers

            copy(numbers.begin(), numbers.end(), copiedNumbers.begin()); // Copy Elements from Numbers to copiedNumbers

            std::vector<int> newNumbers(6);
            fill(numbers.begin(), numbers.end(), 35); // Fill all elements in the vector with the number 35

        }
};

int main() {
    myTests mt;

    mt.iterationTest();
    mt.ordenationAlgorithmTest();

    return 0;
}