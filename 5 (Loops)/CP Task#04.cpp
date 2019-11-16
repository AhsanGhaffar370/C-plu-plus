#include <iostream>
using namespace std;
int main()
{
int a,b,num,posNumber;

do
{
	cout<<"\n"<<"Enter any integer Positive number >=1: ";
    cin>>num;
    posNumber=num;
	if(posNumber<1)
	{
		cout<<"\n"<<"Wrong Input Please try again."<<endl;
	}
		else if(posNumber==1)
	{
		cout<<"\n"<<"Value is "<<posNumber<<" Thank you:"<<endl;
	}
	else if(posNumber==1)
	{
		cout<<"\n"<<"Value is "<<posNumber<<" Thank you:"<<endl;
	}
	else if(posNumber>1)
	{
		if(posNumber%2==0)
		{
			cout<<"\n"<<"The number is Even: ";
			posNumber=posNumber/2;
			cout<<posNumber<<endl;
		}
		else if(posNumber%2==1)
	    {
		    cout<<"\n"<<"The number is Odd: ";
		    posNumber=posNumber*2;
		    cout<<posNumber<<endl;
	    }
    } 
}while(posNumber>1);

	return 0;
}
