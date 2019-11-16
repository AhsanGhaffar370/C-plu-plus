#include<iostream>
#include<iomanip>
using namespace std;
void add(int,int,int&);
void substract(int,int,int&);
void divide(int,int,float&);
void multiply(int,int,int&);
int main()
{
	//Declaring Variables:
	//integer Result & Float di are used as Pass by refrence variables:
	int a,b,result;
	float di;
	
	//Enter Two number:
	cout<<"Enter Any Two Numbers: "<<endl;
	cin>>a>>b;
	
	cout<<setw(73)<<setfill('=')<<endl;
	
	//Call Add Function:
	add(a,b,result);
	cout<<result<<endl;

    //Call Substract Function:
	substract(a,b,result);
	cout<<result<<endl;
    
    //Call Divide Function:
	divide(a,b,di);
	cout<<di<<endl;
	
	//Call Multiply Function:
	multiply(a,b,result);
	cout<<result<<"\n";
	
	cout<<setw(45)<<setfill('=')<<endl<<"\n";
	
	return 0;             
}

//Addition Calculating Function:
void add(int i,int j,int&sum)
{

	cout<<"\n\nThe Sum of two Numbers is: ";
    
	//Calculate Sum:
	sum=i+j;
}

//Substraction Calculating Function:
void substract(int i,int j,int&sub)
{

	cout<<"\nThe Substraction of two Numbers is: ";
	
	//Calculating Substraction:
	sub=i-j;
}

//Division Calculating Function:
void divide(int i,int j,float&div)
{

	cout<<"\nThe Division of two Numbers is: ";
	
	//Calculating Division:
	div=i/j;
}

//Multiplying Calculating Function:
void multiply(int i,int j,int&mul)
{

	cout<<"\nThe Multiplication of two Numbers is: ";
	
	//Calculating Multiplication:
	mul=i*j;
}
