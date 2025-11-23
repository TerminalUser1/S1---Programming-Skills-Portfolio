#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    string search = "Sam";
    bool found = false;

    for (int i = 0; i < 6; i++) {
        if (names[i] == search) {
            found = true;
        }
    }

    if (found) {
        cout << "Sam was found in the list.";
    } else {
        cout << "Sam was not found.";
    }

    return 0;
}
