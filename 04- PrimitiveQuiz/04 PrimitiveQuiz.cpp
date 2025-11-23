#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string answer;

    cout << "what is the capital of France? ";
    cin >> answear;

    // convet to lowercase
    transform(answear.begin(), answear.end(), answer.begin(), ::tolower);

    if(answer == "paris"){
        cout << "Correct!" << endl;

    } else {
        cout << "Wrong! << endl";

    }

    return 0;

}