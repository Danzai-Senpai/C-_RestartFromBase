#include<iostream>
using namespace std;

int main(){
    int yourAge;
    const int votingAge = 16;

    cout << "Write your age: ";
    cin >> yourAge;

    string canivote = (yourAge>=votingAge) ? "You can vote" : "You can\'t vote";
    cout << canivote;
}