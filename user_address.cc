#include <iostream>
using namespace std;

int main() {
    string street;
    string city;
    string state;
    int zipcode;

    /* getline used to read all the information give
    until it hits the end of the line, correctly handling spaces*/

    cout << "What is your street address?\n";
    getline(cin, street); 

    cout << "What city do you live in?\n";
    getline(cin, city);

    cout << "What state do you live in?\n";
    getline(cin, state);  
    cout << "What is your ZIP code?\n";
    cin >> zipcode;

    cout << street << "\n";
    cout << city << "," << state << " - " << zipcode << "\n";

    return 0;
}
