#include<iostream>
using namespace std;
long fact(int);
int main()
{
	//Declaring Variable:
	int N;
	
	cout<<"Enter any positive number: ";
	cin>>N;
	
	//use if conditionto prints this block:
	if(N>1)
	{
		//Call fact function:
	   cout<<"\nSum of Positive N("<<N<<") is: ";
	   cout<<fact(N);
    }
	return 0;
}

//Calculating factorial sum function:
long fact(int n)
{
	//Use if conditionto stops the recursion:
	if(n==0)
	return 1;
	
	//function call itself with one lesser value then adding it with its previous value: 
	return (n+fact(n-1));
}
