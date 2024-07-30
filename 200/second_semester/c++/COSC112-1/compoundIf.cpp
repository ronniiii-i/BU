#include <iostream>
using namespace std;
/**
 * Code to calculate student grade
 * Egbu Princess Roni
 * Software Engineering
 * 23/0268
 */

int main() {
    float score;

    cout<<"Input Student Score:";
    cin>>score;

    if(score>100){
        cout<<"Invalid Score\n";
    }else if(score>=80){
        cout<<"Student Grade is A";
    } else if(score>=60){
        cout<<"Student Grade is B";
    } else if(score>=50){
        cout<<"Student Grade is C";
    } else if(score>=45){
        cout<<"Student Grade is D";
    } else if(score>=40){
        cout<<"Student Grade is E";
    } else if(score==1){
        cout<<"Incomplete Result NG";
    } else if(score>=0){
        cout<<"Student Grade is F";
    }else if(score==-1){
        cout<<"Failure due to attendance";
    } else if(score<0&&score!=-1){
        cout<<"Invalid Score\n";
    }
    return 0;
}