#include<iostream>
using namespace std;
int main()
{
//declaring variable:
float a,b,c,d,e,X;
//input a:
cout<<"Input value of 'a' :"<<" ";
cin>>a;
//input b:
cout<<"\n"<<"Input value of 'b' :"<<" ";
cin>>b;	
//solving equation X=(a+b)2-2ab:
c=a+b;
d=c*2;
e=2*a*b;
X=d-e;
//equation solved:
cout<<"\n"<<"\t"<<"X"<<"="<<X<<endl;
return 0;
}

