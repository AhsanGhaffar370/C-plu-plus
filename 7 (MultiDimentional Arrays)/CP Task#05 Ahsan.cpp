#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Declaring Variable:
	int ro,co,i,j;
	
	//Taking Size of an Array from User:
	cout<<"Enter rows of an Array: ";
	cin>>ro;
	cout<<"Enter columns of an Array: ";
	cin>>co;
	int a[ro][co],rosum=0,cosum=0;
	cout<<"\n";
	
	//Taking input of array1 Values from user: 
	for(i=0;i<ro;i++)
	{
		for(j=0;j<co;j++)
		{
			cout<<"Enter["<<i<<"]["<<j<<"] :";
			cin>>a[i][j];
		}
	}
	
	cout<<"\n";
	//Prints Array1 in Matrix form:
	for(i=0;i<ro;i++)
	{
		for(j=0;j<co;j++)
		{
			cout<<"  "<<a[i][j];
		}
		cout<<endl;
	}

    cout<<"\n";
    //Add Rows of Array1 & also prints the row sum:
	for(i=0;i<ro;i++)
	{
		for(j=0;j<co;j++)
		{
			rosum+=a[i][j];
		
		}
		cout<<"sum of Row "<<i<<"= "<<rosum;
		rosum=0;
		cout<<"\n";
	}
    
    cout<<"\n";
    //Add Columns of Array1 & also prints the Column sum:
	for(j=0;j<co;j++)
	{
	    for(i=0;i<ro;i++)
		{
			cosum+=a[i][j];
		}
		
		cout<<"sum of Column "<<j<<"= "<<cosum;
		cosum=0;
		cout<<"\n";
	}
	
  return 0;
}
