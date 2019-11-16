//including Libraries "iostream" &"iomanip":
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
//Declaring variable:
float a,b,c;
//Weight of person in kg:
cout<<"Weight of a person in kg= ";
cin>>a;
b=a*2.2;
//Weight of person in pound:
cout<<"\n"<<setprecision(2)<<fixed<<"Weight of a person in Pounds= "<<b;
return 0;
}

