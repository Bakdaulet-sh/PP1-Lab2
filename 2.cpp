#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a decimal number: ";
    cin >> number;

    if (number == 0) {
        cout << "Binary: 0" << endl;
        return 0;
    }

    string binary = "";

    int n = number;
    while (n > 0) {
        binary = char((n % 2) + '0') + binary;
        
        n /= 2;

    }

    cout << "Binary: " << binary << endl;

    return 0;
}