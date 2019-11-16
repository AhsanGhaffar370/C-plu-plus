#include<iostream>
using namespace std;
int addition(int i,int j);
int substract(int i,int j);
int division(int i,int j);
int multiply(int i,int j);
int main()
{
	int a,b,c,d;
	cout<<"Enter two numbers:"<<endl;
	cin>>a>>b;

	cout<<"\n1.Addition"<<"\t2.Substract"<<"\n3.Division"<<"\t4.Multiply"<<endl;
	cout<<"Choose one of the above options: ";
	cin>>c;
	
	switch(c)
	{
		case 1:
		{
			cout<<"\nThe Addition of two numbers is: ";
			cout<<addition(a,b);
			break;
		}
		
		case 2:
		{
			cout<<"\nThe Substraction of two numbers is: ";
			cout<<substract(a,b);
			break;
		}
	
		case 3:
		{
			cout<<"\nThe Division of two numbers is: ";
			cout<<division(a,b);
			break;
		}
		
		case 4:
		{
			cout<<"\nThe Multiplication of two numbers is: ";
			cout<<multiply(a,b);
			break;
		}
		default:
		cout<<"\nChoose Correct Option";	
	}
	return 0;             
}

int addition(int i, int j)
{
	int sum;
	sum=i+j;
	return sum;
}

int substract(int i, int j)
{
	int sub;
	sub=i-j;
	return sub;
}

int division(int i, int j)
{
	int div;
	div=i/j;
	return div;
}

int multiply(int i, int j)
{
	int mul;
	mul=i*j;
	return mul;
}
