#include<iostream>
using namespace std;

int main() {
    
    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };

    cout << letters[0][2] << "\n";
    cout << "\n\n";

    letters[0][0] = "Z";

    cout << letters[0][0] << "\n";
    cout << "\n\n";

    letters[0][0] = "A";

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << letters [i][j] << "\n";
        }
    }

    cout << "\n\n";

    string words[2][2][2] = {
        {
            {"A", "B"},
            {"C", "D"}
        },
        {
            {"E", "F"},
            {"G", "H"}
        }
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << words [i][j][k] << "\n";
            }
        }
    }
    
}