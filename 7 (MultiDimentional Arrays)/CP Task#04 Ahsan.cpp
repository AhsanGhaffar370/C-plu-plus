#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Declaring Variable:
	int a[4][3],b[4][3],i,j;
	

	cout<<"Enter any 12 integer values of an Array:"<<endl;
	//Values of array entered by user:
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
		cout<<setw(3);
	}
	
	cout<<"\n"<<"============================="<<endl;
	cout<<setw(4)<<"Matrix A-Original"<<endl;
	cout<<"============================="<<endl;
	
	//Output of array1 in Matrix form:
	for(i=0;i<4;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		cout<<setw(5)<<a[i][j];
		}
		cout<<endl;	
	}
	
	//Array1 divided by 5 and then store in array2:
	for(i=0;i<4;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		b[i][j]=a[i][j]/5;
		}
		cout<<endl;	
	}
	
	cout<<"============================="<<endl;
	cout<<setw(4)<<"Matrix A-Divided by 5"<<endl;
	cout<<"============================="<<endl;
	
	//output of array2 in Matrix form:
	for(i=0;i<4;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		cout<<setw(4)<<b[i][j];
		}
		cout<<endl;	
	}
	return 0;
}
