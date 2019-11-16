#include<iostream>
using namespace std;
int main()
{
	int a,b,c,num4,num5;

	//(a):
	//enter integer from 1-100:
	cout<<"Enter any integer number from 1 to 100: ";
	cin>>a;
	//apply for loop:
	for(int num1=100;a<=num1;a++)
	{
     cout<<a<<endl;
	}
	//(b):
	//enter num from 1-100 and make it print in odd series:
	cout<<"\n"<<"Enter any integer number from 1 to 100: ";
	cin>>b;
	//apply for loop:
	for(int num2=100;b<=num2;b++)
	{
		if(b%2==1)
	    cout<<b<<endl;	
	}
	//(c):
	//enter integer num and make it print from 1-N:
	cout<<"\n"<<"Enter any integer number: ";
	cin>>c;
	//apply for loop:
	for(int num3=1;c>=num3;c--)
	{
		cout<<c<<endl;
	}
	//(d)(e):
	//enter any alphabet and prints it in decending order:
	     char alph,x;	
    	cout<<"\n"<<"Enter any Alphabets: ";		
    	cin>>alph;
	if(alph<='z')
	{
		
		
		
			for(x='z';x>=alph;x--)
			{
				if(x!='a' && x!='e' && x!='i' && x!='o' && x!='u')
				{
					cout<<x<<endl;
				}
			}
			
	}
	//(f):
	//enter starting & ending value:
	cout<<"\n"<<"Enter starting value: ";
	cin>>num4;
	cout<<"\n"<<"Enter ending value: ";
	cin>>num5;
	for(;num4<=num5;num4++)
	{
      if(num4>num5)
      {
      	cout<<"wrong input.try again "<<endl;
	  }
		cout<<num4<<endl;
	}
	cout<<"\n"<<"Thank You Very Much."<<endl;
	return 0;
}
