#include<iostream>
using namespace std;
int main()
{
//Declaring variables:	
int num1,num;
//Enter num:
cout<<"Enter any integer number: ";
cin>>num;
num1=num%2;
//Apply condition:
if(num1==0)
{
cout<<"\n"<<"The Entered num is even"<<endl;	
}	
else
{
cout<<"\n"<<"The Entered num is odd"<<endl;			
}
}
