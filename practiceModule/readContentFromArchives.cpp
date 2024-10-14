#include<fstream>
#include<string>
#include<iostream>

int main() {

    std::ifstream input("Text.txt");

    std::string textRead;

    for (std::string line; getline(input, line);) {
        textRead += line;
    }

    std::cout << std::endl;
    std::cout << textRead << std::endl;
    std::ofstream myFile;
    myFile.open("Text.txt");
    std::cout << std::endl;
    myFile << "The File is Empty now." << std::endl;
    myFile.close();

    return 0;
}