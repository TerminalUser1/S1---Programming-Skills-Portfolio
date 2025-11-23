#include <iostream>
using namespace std;

int main() {

    // 1. Count up from 0 to 50
    for (int i = 0; i <= 50; i++) {
        cout << i << endl;
    }

    // 2. Count down from 50 to 0
    for (int i = 50; i >= 0; i--) {
        cout << i << endl;
    }

    // 3. Count up from 30 to 50
    for (int i = 30; i <= 50; i++) {
        cout << i << endl;
    }

    // 4. Count down from 50 to 10 in decrements of 2
    for (int i = 50; i >= 10; i -= 2) {
        cout << i << endl;
    }

    // 5. Count up from 100 to 200 in increments of 5
    for (int i = 100; i <= 200; i += 5) {
        cout << i << endl;
    }

    return 0;
}
