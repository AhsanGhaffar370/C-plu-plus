#include<iostream>
#include<iomanip>
using namespace std;
void comparison(int,int);
void comparison(int,int,int);
void comparison(int,int,int,int);
int main()
{
	//Declaring Variables:
	int a,b,c,d;
	
	//Enter 4 number for smallest & largest comparison:
	cout<<"Enter 4 Positive Numbers:"<<endl;
	cin>>a>>b>>c>>d;
	
	//use function overloading to Call Comparison function:
	   comparison(a,b);
	
	   comparison(a,b,c);

	   comparison(a,b,c,d);
    
	return 0;
}

//Comparing Smallest And Largest Function:
void comparison(int i,int j)
{
	//Use if & else if to compare Smallest & Largest values:
	cout<<"\n"<<setw(63)<<setfill('*')<<endl;
	
	if(i<j)
	cout<<"\nSmallest among First Two is: "<<i<<endl;
	
	else if(i>j)
	cout<<"\nLargest Among First Two is: "<<i<<endl;
	
	if(j<i)
	cout<<"\nSmallest Among FIrst Two is: "<<j<<endl;
	
	else if(j>i)
	cout<<"\nLargest Among FIrst Two is: "<<j<<endl;
	
	cout<<"\n"<<setw(35)<<setfill('*')<<"\n";	
}

//Comparing Smallest And Largest Function:
void comparison(int i,int j,int k)
{
	//Use if & else if to compare Smallest & Largest values:
	cout<<"\n"<<setw(35)<<setfill('*')<<"\n";
	
	if(k<i && k<j)
	cout<<"\nSmallest Among First Three is: "<<k<<endl;
	
	else if(k>i && k>j)
	cout<<"\nLargest Among First Three is: "<<k<<endl;
	
	if(j<i && j<k)
	cout<<"\nSmallest Among First Three is: "<<j<<endl;
	
	else if(j>i && j>k)
	cout<<"\nLargest Among First Three is: "<<j<<endl;
	
	if(i<j && i<k)
	cout<<"\nSmallest Among First Three is: "<<i<<endl;
	
	else if(i>j && i>k)
	cout<<"\nLargest Among First Three is: "<<i<<endl;
	
	cout<<"\n"<<setw(35)<<setfill('*')<<"\n";
}

//Comparing Smallest And Largest Function:
void comparison(int i,int j,int k,int l)
{
	//Use if & else if to compare Smallest & Largest values:
	cout<<"\n"<<setw(35)<<setfill('*')<<"\n";
	
	if(i<j && i<k && i<l)
	cout<<"\nSmallset Number in The List is: "<<i<<endl;
	
	else if(i>j && i>k && i>l)
	cout<<"\nLargest Number in The List is: "<<i<<endl;
	
	if(j<i && j<k && j<l)
	cout<<"\nSmallset Number in The List is: "<<j<<endl;
	
	else if(j>i && j>k && j>l)
	cout<<"\nLargest Number in The List is: "<<j<<endl;
	
	if(k<i && k<j && k<l)
	cout<<"\nSmallset Number in The List is: "<<k<<endl;
	
	else if(k>i && k>j && k>l)
	cout<<"\nLargest Number in The List is: "<<k<<endl;
	
	if(l<i && l<j && l<k)
	cout<<"\nSmallset Number in The List is: "<<l<<endl;
	
	else if(l>i && l>j && l>k)
	cout<<"\nLargest Number in The List is: "<<l<<endl;
	
	cout<<"\n"<<setw(35)<<setfill('*')<<"\n";
}
