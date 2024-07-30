#include <iostream>
#include <string>
using namespace std;

int main() {
    // SINGLE ITEM
    string item;
    cout<<"Input item name: ";
    cin>>item;
    cout<<"Item: "<<item<<endl<<endl;

    // MULTIPLE ITEMS
    string items[10] = {};
    for (int i = 0; i < 10; i++)
    {
    cout<<"Input item "<< i+1 <<": ";
    cin>>items[i];
    }
    cout<<"\n\nITEMS\n";
    for (int i = 0; i < 10; i++)
    {
    cout<< i+1 <<". "<< items[i]<<endl;
    }
    

    return 0;
}