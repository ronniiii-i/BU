#include <iostream>
using namespace std;
/**
 * Meal Ticket
 * pay school fees, financial approval, receipt, passport
 *  
 * @return int 
 */

void outside(char fee, char fin, char recpt, char pass){
    cout<<"Input Y/N as appropriate\n";
    cout<<"Have you paid your fee?: ";
    cin>>fee;
    cout<<"Do you have financial approval?: ";
    cin>>fin;
    cout<<"Do you have a receipt?: ";
    cin>>recpt;
    cout<<"Do you have a passport?: ";
    cin>>pass;

    if(fee=='Y'){
        if (fin=='Y')
        {
            if (recpt=='Y')
            {
                if (pass=='Y')
                {
                    cout<<"Printing meal tickets.......\n";
                } else {
                    cout<<"You need a passport photograph\n";
                }
            } else {
                cout<<"You need to print your receipt\n";
            }
        } else {
            cout<<"Generate your financial approval\n";
        } 
    } else {
        cout<<"Pay your school fees\n";
    }
}
void inside(char fee, char fin, char recpt, char pass){

    cout<<"Input Y/N as appropriate\n";
    cout<<"Have you paid your fee?: ";
    cin>>fee;

    if(fee=='Y'){
        cout<<"Do you have financial approval?: ";
        cin>>fin;

        if (fin=='Y'){
            cout<<"Do you have a receipt?: ";
            cin>>recpt;

            if (recpt=='Y'){
                cout<<"Do you have a passport?: ";
                cin>>pass;

                if (pass=='Y'){
                    cout<<"Printing meal tickets.......\n";
                } else {
                    cout<<"You need a passport photograph\n";
                }
            } else {
                cout<<"You need to print your receipt\n";
            }
        } else {
            cout<<"Generate your financial approval\n";
        } 
    } else {
        cout<<"Pay your school fees\n";
    }
}


int main() {
    char fee, fin, recpt, pass;
    // outside(fee,fin,recpt,pass);
    inside(fee,fin,recpt,pass);
    return 0;
}