#include<iostream>
using namespace std;
int main()
{
	//declaring variables:
	float a,b,c;
	int op; 
	//Enter values:
	cout<<"Enter any three values:"<<endl;
	cin>>a>>b>>c;
	cout<<"\n"<<"'1' for Smallest: "<<endl;
	cout<<"\n"<<"'2' for Largest:"<<endl;
	cout<<"\n"<<"'3' for Sum:"<<endl;
	cout<<"\n"<<"'4' for Average:"<<endl;
	cout<<"\n"<<"Enter one of the above choices: ";
	cin>>op;
	//For smallest number:
	if(op==1 && a<b && a<c) 
	{
	cout<<"\n"<<"The smallest num is: "<<a<<endl;
	}
    else if(op==1 && b<a && b<c) 
	{
	cout<<"The smallest num is: "<<b<<endl;
	}
	else if(op==1 && c<a && c<b)
	{
	cout<<"\n"<<"The smallest num is: "<<c<<endl;
	}
	//For largest number:
	else if(op==2 && a>b && a>c) 
	{
	cout<<"\n"<<"The largest num is: "<<a<<endl;
	}
    else if(op==2 && b>a && b>c) 
	{
	cout<<"\n"<<"The largest num is: "<<b<<endl;
	}
	else if(op==2 && c>a && c>b)
	{
	cout<<"\n"<<"The largest num is: "<<c<<endl;
	}
	//For Sum:
	else if(op==3)
	{
	cout<<"\n"<<"Sum of Values are:"<< a+b+c<<endl;
	}
	//For Average:
	else if 
	(op==4)
	{
	cout<<"\n"<<"Avearage of Values are: "<<(a+b+c)/3<< endl;
	}
	else 
	{
	cout<<"\n"<<"Enter correct numbers"<<endl;
	}
return 0;
}

