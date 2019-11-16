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
	switch(op)
	{
	//For smallest number:	
	case 1:
	if(a<b && a<c) 
	cout<<"\n"<<"The smallest num is: "<<a<<endl;
    else if(b<a && b<c) 
	cout<<"The smallest num is: "<<b<<endl;
	else if(c<a && c<b)
	cout<<"\n"<<"The smallest num is: "<<c<<endl;
	break;
	//For largest number:
	case 2:
	if(a>b && a>c) 
	cout<<"\n"<<"The largest num is: "<<a<<endl;
    else if(b>a && b>c) 
	cout<<"\n"<<"The largest num is: "<<b<<endl;
	else if(c>a && c>b)
	cout<<"\n"<<"The largest num is: "<<c<<endl;
	break;
	//For Sum:
	case 3:
	cout<<"\n"<<"Sum of Values are:"<< a+b+c<<endl;	
	break;
	//For Average:
	case 4:
	cout<<"\n"<<"Avearage of Values are: "<<(a+b+c)/3<< endl;	
    break;
	}
	return 0;
    }
