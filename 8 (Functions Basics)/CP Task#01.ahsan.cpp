#include<iostream>
using namespace std;
void month(int);
int main()

{
	int m,a,b;
	
	cout<<"Enter Month Of Year: ";
	cin>>m;

    month(m);
	
	return 0;
}
void month(int mon)
{	
	if(mon==1)
	{
		cout<<"\nThe Month Of Year is :January"<<endl;
	}
	
	else if(mon==2)
	{
		cout<<"\nThe Month Of Year is :February"<<endl;	
	}
	
	else if(mon==3)
	{
		cout<<"\nThe Month Of Year is :March"<<endl;	
	}
	
	else if(mon==4)
	{
		cout<<"\nThe Month Of Year is :April"<<endl;	
	}	
	
	else if(mon==5)
	{
		cout<<"\nThe Month Of Year is :May"<<endl;	
	}	
	
	else if(mon==6)
	{
		cout<<"\nThe Month Of Year is :June"<<endl;	
	}	
	
	else if(mon==7)
	{
		cout<<"\nThe Month Of Year is :July"<<endl;	
	}	
	
	else if(mon==8)
	{
		cout<<"\nThe Month Of Year is :August"<<endl;	
	}	
	
	else if(mon==9)
	{
		cout<<"\nThe Month Of Year is :September"<<endl;	
	}	
	
	else if(mon==10)
	{
		cout<<"\nThe Month Of Year is :October"<<endl;	
	}
		
	else if(mon==11)
	{
		cout<<"\nThe Month Of Year is :November"<<endl;	
	}
		
	else if(mon==12)
	{
		cout<<"\nThe Month Of Year is :December"<<endl;	
    }
    
    else
    {
    	cout<<"\nIt's not the Month Of Year \n   Please Try Again"<<endl;
	}
}
