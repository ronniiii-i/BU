//linear search of an array
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	float weight[]={12.9, 15.8, 10.5, 20.7, 11.0, 16.5};
	int length, ind;
	float value;
	length=sizeof(weight)/sizeof(weight[0]);
	cout<<"Number of elements in the array is "<<length<<endl;
	
	cout<<"You are searching for weight ...\n";
	cin>>value;
	for(ind=0;ind<length;ind++)
	{
		if(weight[ind]==value)
		{
			cout<<"Weight found on index "<<ind;
			break;
		}
	}
	if(ind==length)
	{
		cout<<"Weight not found\n";
	}
}