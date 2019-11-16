#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void avrg(int,int,int,int&);
int main()
{
	//Declaring Variables:
	int a,b,c,av;
	
	//Enter 3 Numbers:
	cout<<"Enter any three num b/w 1-100:"<<endl;
	cin>>a>>b>>c;
	
	//if numbers are >100 & <1 then execute else block:
	if(a>=1 && a<=100 && b>=1 && b<=100 && c>=1 && c<=100 )
	{
		//Calling average function:
	   avrg(a,b,c,av);  
    }
    
    else
    cout<<"Please Enter Correct Number:"<<endl;
}

//Average Calculating Function:
void avrg(int i,int j,int k,int&avg)
{
	//Declaring Variables:
	int x,d,e,f,g,h,l,m,n;
	float o,Sdev;
	
	//Calculate Average:
	x=i+j+k;
	avg=x/3;
	
	cout<<"\n"<<setw(80)<<setfill('*')<<endl;
	
	//print average value:
	cout<<"\nThe Average Of Three Numbers is: "<<avg<<endl;
	   
	//Calculating Standard Daviation & Variance:   
	d=i-avg;
	e=d*d;
	f=j-avg;
	g=f*f;
	h=k-avg;
	l=h*h;
	m=e+g+l;
	n=3-1;
	o=m/n;
	Sdev=sqrt(o);
	   
	//Print Variance Value:   
	cout<<"\nThe Variance Of These Numbers is: "<<o<<endl;
	   
	//Print Standard Deviation Value:   
	cout<<"\nThe Standard Deviation of these numbers is: "<<Sdev<<endl;
	   
	cout<<"\n**********************************************"<<endl;
}
