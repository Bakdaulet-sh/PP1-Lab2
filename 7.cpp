#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Enter a word: ";
    cin >> text;

    cout << "Length of the string: " << text.length() << endl;
    cout << "First character: " << text[0] << endl;

    return 0;
}