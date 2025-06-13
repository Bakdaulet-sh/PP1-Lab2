#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num;

    cout << "Enter a floating point number: ";
    cin >> num;

    cout << "Square: " << pow(num, 2) << endl;
    cout << "Rounded: " << round(num) << endl;
    cout << "Ceil: " << ceil(num) << endl;
    cout << "Floor: " << floor(num) << endl;

    return 0;
}