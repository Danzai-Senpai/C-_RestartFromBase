# include <iostream>
# include <cmath>

using namespace std;

int main() {

    float x, y;
    float ratio;

    cout << "Insert a number: ";
    cin >> x;
    cout << "Insert another number: ";
    cin >> y;

    ratio = (x + y) / 2;
    cout << "Your ratio is: " << ratio;

    return 0;

}