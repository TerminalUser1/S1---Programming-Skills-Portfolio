#include <iostream>
#include <string>
using namespace std;


int main(){
    string name;
    string hometown;
    int age;

    cout << "Enter your name: ";
    getline(cin,name);

    cout << " Enter you hometown:";
    getline(cin, hometown);

    cout << "Enter your age: " ;
    cin >> age;

    if (cin.fail()){
        cout << "Invalid age input.\n";
        return 0;
    }

    cout << "Name: " << name << endl
         << "Hometown: " << hometown << endl
         << "Age: " << age << endl;
         
    return 0     


}