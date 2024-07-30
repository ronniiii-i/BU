#include <iostream>
using namespace std;

void listnum(){
    //program that prints 1 - 10
    for (int i = 1; i <= 10; i++)
    {
        cout<<i<< endl;
    }
}
void luckynum(){
    //prints error message if user inputs odd number
    int num, count;

    cout<<"Game of lucky numbers\n==========\n\n";
    for (count = 0; count < 3; count++)
    {
        cout<<"Input a number:";
        cin>>num;

        if (num%2!=0)
        {
            cout<<"Sorry but you are out of the game";
            break;
        }
        if (count==2)
        {
            cout<<"You get free tuition!! yayy!!";
        }
        
        
    }
}
void primenum(){
    int prime, count;

    cout<<"Input a number: ";
    cin>>prime;

    for (int i = 2; i < prime; i++)
    {
        if (prime%i==0)
        {
            cout<<prime<<" is not a prime number\n";

            for (int j = 2; j < prime; j++)
            {
                if (prime%j==0)
                {
                    cout<<prime<<"%"<<j<<"="<<prime%j<<endl;
                }
            }
            break;
        }
        if (i==prime-1)
        {
            cout<<prime<<" is a prime number";
        }
        
        
    }
    
} 
void primenum2(){
    //prints out all prime numbers from 1 till 100
    for (int i = 2; i < 100; i++)
    {
        int count = 0;
        for (int j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                count++;
            }
        }
        
            if (count==0)
            {
                cout<<i<<endl;
            }
    }
                    
}

int main() {

    // listnum();
    // luckynum();
    // primenum();
    // primenum2();

    
    return 0;
}