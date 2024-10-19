#include<iostream>
using namespace std;

int main(){

    string cars[5] = {"Volvo", "BMW", "Citroen", "Mercedes", "Volkswagen"};
    cout << "Meu sonho e comprar um " << cars[0] << ".\n";

    cars[0] = "Opel";
    cout << "Meu sonho e comprar um " << cars[0] << ".\n";
}