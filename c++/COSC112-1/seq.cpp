#include <iostream>
using namespace std;

int main() {
    string fullname;
    string gender;
    int age;
    string address;
    string phone_number;
    string email;

    cout<<"Input your fullname: ";
    getline(cin,fullname);
    cout<<"Input your address: ";
    getline(cin,address);
    cout<<"Input your gender: ";
    cin>>gender;
    cout<<"Input your age: ";
    cin>>age;
    cout<<"Input your Phone Number: ";
    cin>>phone_number;
    cout<<"Input your email: ";
    cin>>email;

    cout<<"\n\nMY BIODATA\n";
    cout<<"Fullname: "<<fullname<<endl;
    cout<<"Gender: "<<gender<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Phone Number: "<<phone_number<<endl;
    cout<<"Email: "<<email<<endl;

    return 0;
}