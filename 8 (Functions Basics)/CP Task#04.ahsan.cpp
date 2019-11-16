#include<iostream>
using namespace std;
int power(int x, int y);
int main()
{
	int a,b,c;
	cout<<"Enter any base: ";
	cin>>a;
	cout<<"\nEnter power: ";
	cin>>b;
    cout<<"\nResult for Power ["<<b<<"] of base ["<<a<<"] = ";
    c=power(a,b);
    cout<<c;
	return 0;
}

int power(int x, int y)
{
	int po,i,j=x;
	
	for(i=1;i<y;i++)
	{
		x*=j;
	}
    po=x;
    
	return po;
}
