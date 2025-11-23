#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string answer;
    int score = 0;

    // Question 1
    cout << "What is the capital of France? ";
    cin >> answer;
    transform(answer.begin(), answer.end(), answer.begin(), ::tolower);

    if (answer == "paris") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong!" << endl;
    }

    // Question 2
    cout << "What is the capital of Italy? ";
    cin >> answer;
    transform(answer.begin(), answer.end(), answer.begin(), ::tolower);

    if (answer == "rome") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong!" << endl;
    }

    // Question 3
    cout << "What is the capital of Spain? ";
    cin >> answer;
    transform(answer.begin(), answer.end(), answer.begin(), ::tolower);

    if (answer == "madrid") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong!" << endl;
    }

    // Final score
    cout << "Your final score: " << score << "/3" << endl;

    return 0;
}
