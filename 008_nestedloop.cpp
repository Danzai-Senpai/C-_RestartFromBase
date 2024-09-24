#include<iostream>
using namespace std;

int main(){
    
    for(int i = 0; i < 5; i++){
        
        cout << "Outer: " << i << "\n";
        
        for (int j=1; j < 5; j++){
            
            cout << "Inner: " << j << "\n";
            
        }

    }
}