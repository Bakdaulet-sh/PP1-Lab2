#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Enter the first integer: ";
    cin >> a;

    cout << "Enter the second integer: ";
    cin >> b;

    int result = a & b;

    cout << a << " & " << b << " = " << result << endl;

    return 0;
}