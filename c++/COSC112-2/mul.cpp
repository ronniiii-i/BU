#include <iostream>
using namespace std;

// MULTIPLICATION TABLE IN MAIN FUNCTION

// int main(){
//     int table;
    
//     cout << "Generate the multiplication table of: ";
//     cin>>table;

//     for (int i = 0; i <= 12; i++)
//     {
//         cout<<table<<" x "<< i << " = "<< table*i<<endl;
//     }
    
//     return 0;
// }


// MULTIPLICATION WITH EXTERNAL FUNCTION

int mul_table(int table){
    for (int i = 0; i <= 12; i++)
    {
        cout<<table<<" x "<< i << " = "<< table*i<<endl;
    }
    return 0;
}
int main(){
    int table;
    
    cout << "Generate the multiplication table of: ";
    cin>>table;
    cout<<table<<" TIMES TABLE\n";
    cout<<"===============\n";
    mul_table(table);
    cout<<"\n\n7 TIMES TABLE\n";
    cout<<"===============\n";
    mul_table(7);
    
    return 0;
}