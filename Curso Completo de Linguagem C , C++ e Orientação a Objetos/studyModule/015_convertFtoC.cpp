#include<iostream>
using namespace std;

float toCelsius(float farenheint) {
    return (5.0 / 9.0) * (farenheint - 32.0);
}

int main() {
    float f_value= 98.8;
    float result = toCelsius(f_value);

    cout << "Fahrenheint: " << f_value << "\n";
    cout << "Convert Fahrenheint to Celsius: " << result << "\n";

    return 0;
}