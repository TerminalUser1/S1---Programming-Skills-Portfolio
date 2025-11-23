#include <iostream>
using namespace std;

int main() {
    int password = 12345;
    int attempt = 0;

    while (attempt != password) {
        cout << "Enter password: ";
        cin >> attempt;
    }

    cout << "Welcome to the Secure Area";

    return 0;
}
