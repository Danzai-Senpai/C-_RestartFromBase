#include<iostream>
using namespace std;

int main(){

    int myNumbers[] = {10, 20, 30, 40, 40};

    for(int i : myNumbers){
        cout << i << " --->\n";
    }

}
