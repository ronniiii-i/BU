//multiplication of matrixes using array
#include<iostream>
using namespace std;

int main()
{
	int row1,col1,row2,col2, i,j, k;
	cout<<"Input number of row for first matrix\n";
	cin>>row1;
	cout<<"Input number of column for first matrix\n";
	cin>>col1;
	cout<<"Input number of row for second matrix\n";
	cin>>row2;
	cout<<"Input number of column for second matrix\n";
	cin>>col2;
	if(col1==row2)
	{
	int firstmat[row1][col1], secmatrix[row2][col2], mult[row1][col2];
	//populating first matrix
	cout<<"Populating the first matrix\n";
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			cout<<"Input value for firstmat["<<i<<"]["<<j<<"]\n";
			cin>>firstmat[i][j];
		}
	}
	//print out the first matrix
	cout<<"Printing the first matrix...\n";
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			cout<<firstmat[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	//populating second matrix
	cout<<"Populating the second matrix\n";
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			cout<<"Input value for secmatrix["<<i<<"]["<<j<<"]\n";
			cin>>secmatrix[i][j];
		}
	}
	//print out the first matrix
	cout<<"Printing the second matrix...\n";
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			cout<<secmatrix[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	//matrix multiplication
	cout<<"MATRIX MULTIPLICATION PROCESS...\n";
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col2;j++)
		{
			mult[i][j]=0;
			for(k=0;k<row2;k++)
			{
				mult[i][j]+=firstmat[i][k]*secmatrix[k][j];
			}
		}
	}
	cout<<"MATRIX MULTIPLICATION RESULTS\n";
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col2;j++)
		{
			cout<<mult[i][j]<<"\t";
		}
		cout<<"\n";
	}
		
}else
		cout<<"You cannot perform matrix multiplication\n";
	
}