#include<iostream>
using namespace std;

int main(){
    string cars[5] = {"Volvo", "BMW", "Citroen", "Mercedes", "Volkswagen"};
    for (int i = 0; i < 5; i++) {
        cout << cars[i] << "\n";
    }

    cout << "\n\n";
    cout << "Os indexes desses carros sao respectivamente: ";

    for (int j = 0; j < 5; j++) {
        cout << "\'" << j << "\' ";
    }
}