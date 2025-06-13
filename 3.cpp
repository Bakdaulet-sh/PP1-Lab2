#include <iostream>
#include <string>
using namespace std;

int main() {
    string login, password;
    int code;

    cout << "Login: ";
    cin >> login;

    cout << "Password: ";
    cin >> password;

    cout << "Code: ";
    cin >> code;

    if ((login == "admin" && password == "1234") || code == 9999) {
        cout << "Access granted." << endl;
    } else {
        cout << "Access denied." << endl;
    }

    return 0;
}
