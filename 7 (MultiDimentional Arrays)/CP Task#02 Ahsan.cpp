#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//declaring variable:
	int i,j,c[2][2],a[2][2],b[2][2];
	
	//Taking input of Matrix A:
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		cout<<"Enter["<<i<<"]["<<j<<"] of Matrix A: ";
			cin>>a[i][j];
		}
    }
    
	//Taking input of Matrix B:
	cout<<"\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		cout<<"Enter["<<i<<"]["<<j<<"] of Matrix B: ";
			cin>>b[i][j];
		}
    }
    
    //This loop Prints values of Matrix A:
	cout<<"\n"<<"Matrix A="<<endl<<"\n";
    for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		cout<<setw(5)<<a[i][j];
		}
		
		cout<<endl;	
	}
	
    //This loop Prints values of Matrix B:
	cout<<"\n"<<"Matrix B="<<endl<<"\n";
    for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		cout<<setw(5)<<b[i][j];
		}
		cout<<endl;	
	}
	
	//Add Matrix A & Matrix B and Store it in Matrix C:
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
    cout<<"\n"<<"Addition Of Matrix A & B is:"<<endl;
    cout<<"\n"<<"Matrix C="<<endl<<"\n";

    //Print Matrix C:
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<setw(5)<<c[i][j];
		}
        cout<<endl;
	}
    
	return 0; 
}
