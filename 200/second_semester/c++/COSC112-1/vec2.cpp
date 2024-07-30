#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void moi(){
    vector<float> price={12.25,23.67,44.0,60.5};
    bool result;
    float element;

    cout<<"what are you searching for? ";
    cin>>element;

    result=binary_search(price.begin(),price.end(),element);
    if(result){
        cout<<"found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }
}
void sorting(){
    vector<int> age;
    int num, value;
    
    cout<<"How many people do you have? ";
    cin>>num;

    for (int i = 0; i < num; i++)
    {
        cout<<"Input the age for number "<<i+1<<": ";
        cin>>value;
        age.push_back(value);
    }
    
    sort(age.begin(), age.end());
    for (int i:age){
        cout<<i<<endl;
    }
}


int main(){
    // moi();
    sorting();

    return 0;
}