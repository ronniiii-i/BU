#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int matric_num[10]={1918,2000,4369,2970,1650,781,1918,1912,1657,6757};
    int index;
    sort(matric_num,matric_num+10,greater<int>());
    //how to sort in descending?
    for (index = 0; index < 10; index++)
    {
        cout<<matric_num[index]<<""<<endl;
    }
    
    return 0;
}
