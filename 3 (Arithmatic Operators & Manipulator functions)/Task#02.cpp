#include<iostream>
using namespace std;
int main()
{
//Declaring variables:
float a,b,c,d,e,f;
//Original Price of item:
cout<<"Original Price of item in $= ";
cin>>a;
// % of Mark-up price:
cout<<"Percentage of marked-up prince in $= ";
cin>>b;
//Sales Tax price:
cout<<"Sales tax percentage in $= ";
cin>>c;
//Original Price of item:
cout<<"\n"<<"\n"<<"\t"<<"Original price ="<<a<<"$"<<"\n"<<endl;
//Calculate Mark-up price:
d=a*b/100;
cout<<"\t"<<"Mark-up Price ="<<d<<"$"<<"\n"<<endl;
//Calculate Sales Tax price
e=a*c/100;
cout<<"\t"<<"Sales Tax Price ="<<e<<"$"<<"\n"<<endl;
//Calculate Total price:
f=a+e+d;
cout<<"\t"<<"Total Price ="<<f<<"$"<<"\n"<<endl;
return 0;
}

