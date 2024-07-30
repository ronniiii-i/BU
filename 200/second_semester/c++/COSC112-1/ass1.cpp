#include <iostream>
using namespace std;

int main() {
    char opt;
    cout<<"Are you a visitor? (y/n): ";
    cin>>opt;
    cin.ignore();
    
    if (opt=='y')
    {
        string name, address, phonenum;
        cout<<"Input your name: ";
        getline(cin,name);
        cout<<"Input your address: ";
        getline(cin,address);
        cout<<"Input your phone number: ";
        cin>>phonenum;
        cout<<"Welcome "<<name<<endl;
        
    }
    
    return 0;
}