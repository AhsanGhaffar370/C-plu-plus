#include<iostream>
using namespace std;
int main()
{
//Declaring variables:
char alph,a,e,i,o,u;
//Enter alphabet:
cout<<"Enter any alphabet: ";
cin>>alph;
//Apply condition:
if(alph=='a' || alph=='e' || alph=='i' || alph=='o' || alph=='u')
{
cout<<"\n"<<"The alphabet is vovel"<<endl;	
}
else
{
cout<<"\n"<<"The alphabet is not vovel"<<endl;	
}
return 0;
}
