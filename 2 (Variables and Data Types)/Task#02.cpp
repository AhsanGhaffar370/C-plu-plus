#include<iostream>
using namespace std;
int main()
{
//declaring variable:
float x,y,z;
//enter x and y:
cout<<"Enter any two integer numbers:"<<endl;
cin>>x;
cin>>y;
//addition:
z=x+y;
cout<<"\t"<<x<<"+"<<y<<"\t"<<"="<<" "<<z<<endl;
//substraction:
z=x-y;
cout<<"\t"<<x<<"-"<<y<<"\t"<<"="<<" "<<z<<endl;
//division:
z=x/y;
cout<<"\t"<<x<<"/"<<y<<"\t"<<"="<<" "<<z<<endl;
//multiplication:
z=x*y;
cout<<"\t"<<x<<"*"<<y<<"\t"<<"="<<" "<<z<<endl;
z=y/x;
//percentage:
z=x/y*100;
cout<<"\t"<<x<<"%"<<y<<"\t"<<"="<<" "<<z<<endl;
return 0;	
}

