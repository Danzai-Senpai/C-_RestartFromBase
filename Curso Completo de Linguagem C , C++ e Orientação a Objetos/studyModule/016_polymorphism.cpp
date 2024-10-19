#include<iostream>
using namespace std;

class Animal {
    public:
        void AnimalSound() {
            cout << "The Animals make a sound. \n\n"; 
        }
};

class Pig: public Animal {
    public:
        void AnimalSound() {
            cout << "Weeeeeee\n";
        }
};

class Dog : public Animal {
  public:
    void AnimalSound() {
      cout << "Woof woof \n";
    }
};

int main() {
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.AnimalSound();
    myPig.AnimalSound();
    myDog.AnimalSound();
}