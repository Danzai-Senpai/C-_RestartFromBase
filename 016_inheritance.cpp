#include<iostream>
using namespace std;

class Vehicle {
    public:
        string Brand = "Ford";
        void honk() {
            cout << "Tuut, tuut! \n";
        }
};

class Car: public Vehicle {
    public:
        string Model = "Mustang";
};

class Working {
    public:
        void startEngine() {
            cout << "Vruuuuuuuuuuummmm!";
        }
};

class Price {
    protected:
        int price;
};

class theCar: public Car, public Working, public Price {

    public:
        int Year = 1969;
        int bonus;

        void setPrice(int p) {
            price = p;
        }
        int getPrice() {
            return price;
        }

};

int main() {
    theCar myCar;
    myCar.setPrice(220000);
    myCar.bonus = 20000;
    cout << "Price: " << myCar.getPrice() << "\n";
    cout << "Bonus: " << myCar.bonus << "\n";
    cout << "Total Price: " << myCar.getPrice() + myCar.bonus << "\n\n";
    myCar.honk();
    cout << myCar.Brand + " " + myCar.Model + " " << myCar.Year << "\n\n";
    myCar.startEngine();
    return 0;
}