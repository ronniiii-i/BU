#include <iostream>
using namespace std;

//function prototypes
float add(float num1, float num2);
float div(float num1, float num2);
float sub(float num1, float num2);

int main() {
    float first,sec,addition, division, subtraction;
    addition=add(first,sec);
    cout<<"Addition of the numbers is "<<addition<<"\n========\n";
    division=div(first,sec);
    cout<<"division of the numbers is "<<division<<"\n========\n";
    subtraction=sub(first,sec);
    cout<<"subtraction of the numbers is "<<subtraction<<endl;
    return 0;
}

//function definition
float add(float num1, float num2){
    float sum;
    cout<<"Input two numbers to add: ";
    cin>>num1>>num2;
    sum=num1+num2;
    return sum;
}
//function definition
float div(float num1, float num2){
    float val;
    cout<<"Input two numbers to divide: ";
    cin>>num1>>num2;
    val=num1/num2;
    return val;
}
//function definition
float sub(float num1, float num2){
    float val;
    cout<<"Input two numbers to subtract: ";
    cin>>num1>>num2;
    val=num1-num2;
    return val;
}