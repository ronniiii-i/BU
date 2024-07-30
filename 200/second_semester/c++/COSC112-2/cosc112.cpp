#include <iostream>
using namespace std;


int main() {
    string name, fullName;
    int yob, cYear = 2024;

    cout << "Input your name: ";
    // cin >> name; // get a single word
    getline(cin, fullName); //get multiple words
    
    cout << "Input your year of birth: ";
    cin >> yob;
    // cout << name <<R ", you are " << cYear - yob << " years old.\n"; //print out one name
    cout << fullName << ", you are " << cYear - yob << " years old.\n"; // print out full name
    
    return 0;
}