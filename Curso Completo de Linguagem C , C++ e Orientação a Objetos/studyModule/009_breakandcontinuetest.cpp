#include<iostream>
using namespace std;

int main(){
    
    for(int i = 0; i < 10; i++){
        if (i==4) {
            break;
        }
        cout << i << "\n";
    }

    cout << "\n\n";

    for(int j = 0; j < 10; j++){
        if ( j == 6) {
            continue;
        }

        cout << j << "\n";
    }
}