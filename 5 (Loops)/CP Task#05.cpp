#include<iostream>
using namespace std;
int main()
{

	int n,i,a;
	cout<<"Enter any integer real number:";
	cin>>n;
	cout<<"\n"<<"Enter number:";
    cin>>i;
	int min=a,max=a;
	if(n<0)
	cout<<"\n"<<"Please enter a valid input";
	if(n==0)
	cout<<"\n"<<"Oops you enter a invalid input";
	if(n>=1)
	{
		for(int x=1;x<=n;x++)
		{
			cout<<"\n"<<"enter number "<<x<<":";
			cin>>a;
			
		if(n>max)
			{
			    max=a;
			}
		if(n<min)
			{
				min=a;
				
		    }
		}
			cout<<"largest="<<max<<" "<<"lowest="<<min;
	
		}
		return 0;
	}

