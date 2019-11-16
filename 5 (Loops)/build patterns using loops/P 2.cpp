#include <iostream>
using namespace std;
int main()
{
	//declaring variables:
	int a;
	//enter value from 1-10 to prints triangle:
	cout <<"Enter a integer value from 1 to 10: ";
	cin>> a;
	cout<<"\n";
	
	while(a>=1)
	{
	/*2nd loop also prints
		    ******
	        *****
		    ****
		    ***
		    **
			*               */	
		int b=1;
		while(b<=a)
		{
			cout<<"*";
			b++;
		}
		
		a--;
		cout<<endl;
    }
  
return 0;
}

