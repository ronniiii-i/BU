#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// A vector is a kind of array that changes its size dynamically.
// It is a container but an array is a data structure
// A vector is one dimensional but array is n dimensional
// The size of a vector is the number of elements in the vector
// The capacity of a vector is the number of elements for which it currently has memory allocated

void moi(){
    vector<int> v={1,2,3,4,5,5};
    vector<int> u{6,7,8,9};
    vector<int> w{3,8,1,2,9,5};

    // to add an element to a vector, you use pushback
    u.push_back(10);

    for(int i:u){
        cout<<i<<" ";
    }
    cout<<"\n==========\n\n";

    vector<int> first;
    vector<int> second{1,2,3,4,5};
    vector<int> third={1,2,3,4,5};

    cout<<"There are "<<second.size()<<" elements\n";

    for(int i=0;i<second.size();i++){
        cout<<second[i]<<endl;
    }
    cout<<"\n==========\n\n";
}
void ta(){
    vector<int> data;
    int ele,val;

    cout<<"How many data elements? ";
    cin>>ele;

    for(int i=0;i<ele;i++){
        cout<<"Enter data element "<<i+1<<": ";
        cin>>val;
        data.push_back(val);
    }

    for(int i:data){
        cout<<i<<" ";
    }
    cout<<"\n==========\n\n";
}
void sizeNcap(){
    vector<int> score;
}


int main(){
    // moi();
    // ta();
    sizeNcap();

    return 0;
}