#include<iostream>
using namespace std;
void CopyVal(int &size);
int main()
{
	int i = 5;

	
	CopyVal(i);
		

	return 0;
}

void CopyVal(int &size)
{
	int i = 5;
		int arr1[5];
		int arr2[5];
	
	cout<<"Enter Table a:"<<endl;
	
	for(i=0;i<5;i++)
	{
		cout<<"Please Enter an Integer: ";
		cin>>arr1[i];
		cout<<endl;
	}
	
	cout<<"Enter Table b:"<<endl;
	
	for(i=0;i<5;i++)
	{
		cout<<"Please Enter an Integer: ";
		cin>>arr2[i];
		cout<<endl;
	}
	
	int arrC[10];
	for(int i=0;i<5;i++)
	{
		arrC[i]= arr1[i];
	
	}
	
	for(int i=5, j=0;i<10;i++, j++)
	{
		
		arrC[i]=arr2[j];
	}
	
	for (int i=0; i<10; i++)	
	{
		cout<<arrC[i]<<" ";
	}
	
	
}
