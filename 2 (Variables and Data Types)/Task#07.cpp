#include<iostream>
#include<cmath>
using namespace std;
int main()
{
//declaring variable
float x,y,h,a,b,c,d;
//input values of x and y:
//where x=adjacent and y=opposite:
cout<<"Input value of 'x':"<<endl;
cin>>x;
cout<<"\n"<<"Input value of 'y':"<<endl;
cin>>y;
//solving eq of hypotenuse(h):
//h=(x^2+y^2)^1/2 :
a=x*x;
b=y*y;
c=a+b;
//solving eq of area(a):
//a=1/2*x*y:
d=x*y;
a=d/2;
cout<<"\n"<<"\t"<<"h"<<"="<<sqrt(c)<<endl;
cout<<"\n"<<"\t"<<"a"<<"="<<a<<endl;
return 0;
}

