#include<iostream>

using namespace std;

int main() {
    int studentID = 15, studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';

    cout << "\n\n";
    cout << "Student ID = " << studentID << "\n";
    cout << "Student Age = " << studentAge << "\n";
    cout << "Student Fee = " << studentFee << "\n";
    cout << "Student Grade = " << studentGrade << "\n";
    cout << "\n\n";

    int length = 4, width = 6, area;

    cout << "Length is: ";
    cin >> length;
    cout << "Width is: ";
    cin >> width;

    area = length * width;

    cout << "Area of the rectangle is: " << area << "\n\n";
}
