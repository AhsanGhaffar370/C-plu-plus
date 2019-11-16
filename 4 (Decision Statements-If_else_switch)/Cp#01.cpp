#include<iostream>
using namespace std;
int main()
{
//declaring variables	
float amount,b;
int num,a;
//Enter float and integer num:
cout<<"Enter any float number: ";
cin>>amount;
cout<<"\n"<<"Enter any integer number: ";
cin>>num;
//add amount and num:
a=amount+num;
b=amount+num;
//output of sum:
cout<<"\n"<<"Output in float: "<<b<<endl;
cout<<"\n"<<"Output in integer: "<<a<<endl;
//apply condition: 
if(a>16 && b>16)
{
cout<<"\n"<<"Value of a & b > 16"<<endl;	
}
else
{
cout<<"\n"<<"Value of a & b < 16"<<endl;	
}
return 0;
}
