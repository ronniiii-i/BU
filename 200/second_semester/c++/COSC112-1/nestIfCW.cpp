#include <iostream>
using namespace std;

int main() {
    int loan, salary;
    char prevLoan;
    string username,password;

    cout<<"Input your username: ";
    cin>>username;
    cout<<"Input your password: ";
    cin>>password;

    cout<<"================\nWelcome to Wikieloan "<<username<<"\nHow much would you like to be loaned?: ";
    cin>>loan;
    if (loan<=1000000)
    {
        cout<<"Input your monthly salary: ";
        cin>>salary;
        if ((salary*3)>loan)
        {
            cout<<"Are you currently paying off a loan(with us or any other organisation)?(Y/N)";
            cin>>prevLoan;
            if (prevLoan=='Y')
            {
                cout<<"You are not eligible for a loan. Pay off your previous loan first\n\n====================\nThank you for using our service";
            }
            else
            {
                cout<<"You are eligible for a loan with us!\nInput your account details";
            }
        }
        else
        {
            cout<<"You are not eligible for a loan. Your salary must be three times greater than the amount you wish to loan\n\n====================\nThank you for using our service";
        }
        
    } else{
        cout<<"We cannot loan more than 1 million naira.\n\n====================\nThank you for using our service";
    }
    return 0;
}