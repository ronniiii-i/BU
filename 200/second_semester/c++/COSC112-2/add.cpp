#include <iostream>
using namespace std;

int add(int a, int b){
    int sum = a + b;
    return sum;
}
double areaOfCirlce(double r){
    double area = 3.14*(r*r);
    return area;
}

int main(){
    int sum1 = add(10,30);
    int sum2 = add(100,300);
    int sum3 = add(1,90);
    cout<<"sum1 = "<<sum1<<endl;
    cout<<"sum2 = "<<sum2<<endl;
    cout<<"sum3 = "<<sum3<<endl;
    return 0;
}