#include <iostream>
using namespace std;
int main()
{
	//declaring variables:
	int a;
	
	//enter value from 1-10 for size of triangle:
	cout <<"Enter a integer value from 1 to 10: ";
	cin>>a;
	
	//1st loop is used for size:	
	while(a<=10)
	{
	/*2nd loop prints space in the shape of
		           -
		           --
		           ---
		           ----
		           -----                */  
		int b=1;
		while(b<=a)
		{
			cout<<" ";
			b++;
		}
		a++;
	
		/*3rd loop prints 
		    ********
		     *******
		       *****
		        ****
		         ***
		          **
		           *     */
		int c=10;
		while(c>b)
		{
		    cout<<"*";
	        c--;
		}
				
		cout<<"\n";
    }
return 0;
}

