#include<iostream>
using namespace std;
int power(int x, int y);
int main()
{
	//Declaring Variables:
	int a,b,c;
	
	//Enter Base:
	cout<<"Enter any base: ";
	cin>>a;
	
	//Enter Power:
	cout<<"\nEnter power: ";
	cin>>b;
	
	//Calling Power function:
    cout<<"\nResult for Power ["<<b<<"] of base ["<<a<<"] = ";
    c=power(a,b);
    cout<<c;
	return 0;
}

//Calculate power Function:
int power(int x, int y)
{
	int po,i,j=x;
	
	//Apply for loop to calculate power:
	for(i=1;i<y;i++)
	{
		//base multiply by itlself:
		x*=j;
	}
    po=x;
    
	return po;
}
