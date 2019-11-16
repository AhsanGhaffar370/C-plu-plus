#include<iostream>
using namespace std;
int fibonacci(int);
int main()
{
	//Declaing Variables:
	int n,i=0;
	
	//Enter number :
	cout<<"Input the number of terms for Fibonacci Series"<<endl;
	cin>>n;
	
	//Print Fabonacci series :
	cout<<"\nFibonacci Series is: ";

    //Using for loop to prints fabonacci series by call fabonacci function:
	for(;i<n;i++)
	{
		cout<<" "<<fibonacci(i);
	}

	return 0;
}

//Fabonacci series function:
int fibonacci(int n)
{
	//use if & else condition prints fabonacci series:
	//if no is ==1 or 0 prints n:
	if((n==1) || (n==0))
	{
		return(n);
	}
	
	//else return sum of number-1 & number-2:
	else
	{
		return(fibonacci(n-1)+fibonacci(n-2));
	}
}
