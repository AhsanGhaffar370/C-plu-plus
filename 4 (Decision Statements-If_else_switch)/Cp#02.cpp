#include<iostream>
using namespace std;
int main()
{
//Declaring variables:	
int a,b,c;
//Enter values of a,b and c:
cout<<"Enter value of 'a': ";
cin>>a;
cout<<"\n"<<"Enter value of 'b': ";
cin>>b;
cout<<"\n"<<"Enter value of 'c': ";
cin>>c;	
//apply condition:
if(a<b && a<c)
{
cout<<"\n"<<"The smallest one is: "<<a<<endl;	
}
else if(b<a && b<c)
{
cout<<"\n"<<"The smallest value is: "<<b<<endl;	
}
else
{
cout<<"\n"<<"The smallest one is: "<<c<<endl;	
}
}
