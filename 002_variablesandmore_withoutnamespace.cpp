#include<iostream>

int main(){
    int intTest = 22;
    double doubleTest = 1.76, doubleTest1 = 109.65;
    char charTest = 'A';
    std::string stringTest = "Ronald";
    std::string stringTest1 = "Symon";
    bool boolTest = true;

    std::string name = stringTest.append(" " + stringTest1);

    std::cout << "\n";
    std::cout << "How is your age: ";
    std::cin >> intTest;
    std::cout << "\n\n";

    std::cout << "Hi, my name is " << name << " and I'm " << intTest << " years old." << "\n";
    std::cout << "My blood type is " << charTest << " and my height is " << doubleTest << ". \n";
    std::cout << intTest + doubleTest + doubleTest1;
    std::cout << "\n\n";

    std::cout << "My name has \'" << name.length() << "\' characters.\n";
    std::cout << "My name has \'" << name.size() << "\' characters.\n";
    std::cout << "The first word of my name is \"" << name[0] << "\" and the last is " << name[name.length() - 1] << ".\n";
    name.at(0) = 'D';
    std::cout << "If I change the first word of my first name for the word \'D\' my name will be " << name << ".\n";
    std::cout << "\n\n";

    //const string stringTest = "Caua0";
}
