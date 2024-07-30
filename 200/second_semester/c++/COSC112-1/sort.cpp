//sorting an array in ascending order
#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int qty_item[]={12, 8, 15, 13, 20, 1, 3, 0};
	int ind, length;
	//find the length of the array
	length=sizeof(qty_item)/sizeof(qty_item[0]);
	//sorting the array
	sort(qty_item,qty_item+length);
	cout<<"Sorted array\n";
	for(ind=0;ind<length;ind++)
	{
		cout<<qty_item[ind]<<"\t";
	}
	//searching an array
	cout<<"\n";
	int value;
	cout<<"Input search value\n";
	cin>>value;
	if(binary_search(qty_item,qty_item+length,value))
	{
		cout<<"Element "<<value<<" is found\n";
	}else
		cout<<"Element "<<value<<" is not part of the array\n";
	
}