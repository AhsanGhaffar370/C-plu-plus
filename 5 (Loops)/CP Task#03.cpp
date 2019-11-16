 #include <iostream>
using namespace std;
int main()
{
	int min,max,sum,d;
	do
	{
		cout<<"\n"<<"Enter min & max value: "<<endl;
        cin>>min>>max;
		if(min>max)
		{
	       cout<<"\n"<<"wrong input.Please try again: "<<endl;
	       cout<<"\n"<<"Enter min & max value: "<<endl;
           cin>>min>>max; 
		}
		for(;min<=max;min++)
		{
	       sum+=min;
		}
	}while(min<max);
  
    cout<<"\n"<<"sum of values from a to b is:"<<sum<<endl;
    
return 0;
}
