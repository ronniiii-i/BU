#include <iostream>
using namespace std;

int main() {
    // Learning how to output stuff
    cout << "Hello World!\n";
    cout << "Hello World!\n\n";

    // Learning the variable syntax
    int num = 15;
    cout << num << endl; //endl is an alternative to \n
    string text = "hi hi";
    bool boolean = true;
    cout << text << endl << boolean << endl; // this is how to concatenate
    cout << text << " I am me\n";
    //not much to learn. the syntax is the same as C

    //One Value to Multiple Variables
    int x, y, z;
    x = y = z = 50;
    cout << x + y + z << endl;

    return 0;
}