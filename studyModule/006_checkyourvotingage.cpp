#include<iostream>
using namespace std;

int main(){
    int yourAge;
    const int votingAge = 16;

    cout << "Write your age: ";
    cin >> yourAge;

    if (yourAge > votingAge) {
        cout << "You can vote.";
    } else if (yourAge < votingAge) {
        cout << "You can\'t vote.";
    } else {
        cout << "Be hapy for vote for the first time.";
    }
}