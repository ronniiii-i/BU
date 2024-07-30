#include <iostream>
#include <vector>
using namespace std;

void maxnum(){
//find the max number of numbers in the array
    int number[] = {10,20,56,70,40,49,70,70,50,90,50,60,70};
    int max=0;
    for (int i = 0; i < sizeof(number)/sizeof(number[5]); i++)
    {
        cout<<number[i]<<" ";
        if (number[i]>max)
        {
            max=number[i];
        }
    }
    cout<<"\nThe max of the numbers is "<<max<<endl;
}
void vectornum(){
    vector<int> number={12,20,30};
    for (int i = 0; i < number.size(); i++)
    {
        number[i]=10;
        cout<<number[i]<<" ";
    }
    
}
int main(){
    maxnum();
    vectornum();
    return 0;
}