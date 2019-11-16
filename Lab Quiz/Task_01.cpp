#include<iostream>
using namespace std;
int Recfun(int a);
int main()
{
	int N;
	for(int i=0;i<N;i++)
	{
		cout<<Recfun(N);
	}
	
}

int Recfun(int a)
{
	int r=a-1;
	if(a==0)
	{
		return a;
	}
	
	Recfun(a-1)/(r);
	
	
}
