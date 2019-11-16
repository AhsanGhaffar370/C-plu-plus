#include<iostream>
using namespace std;
void rec(int);
int main()
{
	int a,b;
	cout<<"Enter any num:";
	cin>>a;
	cout<<"Factorial of number is:";
	b=rec(a);
	cout<<b;
}

void rec(int x)
{
	int f;
	if(x==0)
	return 1;
	else
	{
	f=x*rec(x-1);
    cout<<f;
	}
//	return f;
}
