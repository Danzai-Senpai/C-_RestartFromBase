#include<iostream>
using namespace std;

class Car {                  // The class
    public:                  // Access specifier

        string Brand;        // Attribute (string variable)
        string Model;        // Attribute (string variable)
        int Year;            // Attribute (int variable)
        bool Working;        // Attribute (bool variable)
        
        Car(string x, string y, int z, bool w) {

            Brand = x;
            Model = y;
            Year = z;
            Working = w;

        }

        void status() {

            switch (Working)
            {
            case true:
                cout << "Vruuuuuuuummm!!!\n\n";
                break;

            case false:
                cout << "...\n\n";
                break;
            }
            
        }
};

int main() {
    
    Car CarObj1("BMW", "X5", 1999, true);
    Car CarObj2("Ford", "Mustang", 1969, false);

    cout << "\n";
    cout << CarObj1.Brand << " " << CarObj1.Model << " " << CarObj1.Year << "\n";
    CarObj1.status();
    cout << CarObj2.Brand << " " << CarObj2.Model << " " << CarObj2.Year << "\n";
    CarObj2.status();

    return 0;

}