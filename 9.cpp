#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Odd numbers from 1 to " << n << ":" << endl;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            continue;
        }
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
