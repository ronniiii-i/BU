#include <iostream>
using namespace std;

int main(){
    //C++ code that takes student CGPA and uses single option to check if student is eligible for scholarship
    float cgpa;
    cout<< "Input student CGPA: ";
    cin>>cgpa;

    if (cgpa >= 4.0)
    {
        cout<< "Student is qualified for scholarship";
    }
    else
    {
        cout<< "Student is not qualified for scholarship";
    }
    return 0;
}