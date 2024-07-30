#include <iostream>
using namespace std;
/**
 * Code 
 * Egbu Princess Roni
 * Software Engineering
 * 23/0268
 */

int main() {
    char option;
    double amount;

    cout << "Please select an option:\n";
    cout << "A: Recharge MTN\n";
    cout << "B: Recharge Glo\n";
    cout << "C: Recharge Airtel\n";
    cout << "Q: Quit\n";
    cout << "Enter your choice: ";
    cin >> option;

    switch (option)
    {
        case 'A':
            cout<<"Welcome to MTN\n";
            cout<<"Input the amount of airtime\n";
            cin>>amount;
            cout<<"You are successfully recharged with "<<amount<<"\n";
        break;
        case 'B':
            cout<<"Welcome to Glo\n";
            cout<<"Input the amount of airtime\n";
            cin>>amount;
            cout<<"You are successfully recharged with "<<amount<<"\n";
        break;
        case 'C':
            cout<<"Welcome to Airtel\n";
            cout<<"Input the amount of airtime\n";
            cin>>amount;
            cout<<"You are successfully recharged with "<<amount<<"\n";
        break;
        default:
            cout<<"Pick correct option\n";
        break;
    }
    //buying data
    //transfering of airtime

    return 0;
}