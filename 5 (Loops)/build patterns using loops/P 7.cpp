#include <iostream>
using namespace std;
int main()
{
	//declaring variable:
	int a,b,c,d,e;
	
	/*This nested for loop prints:
                *        *
                **      **
                ***    ***
                ****  ****
                **********             */
                
	//1st loop is used for size:	
	for(a=1;a<=10;a++)
	{
		/*2nd loop prints this pattern
		        *
		        **
		        ***
		        ****
		        *****              */
		for(b=1;b<=a;b++)
		{
			cout<<"*";
		}
		/*3rd loop prints space in this shape
		       -----
		        ----
		         ---
		          --
		           -          */
		for(c=10;c>=b;c--)
		{
			cout<<" ";
		}
		/*4th loop prints space in this shape
		           -----
		           ----
		           ---
		           --
		           -          */
		for(d=11;d>c;d--)
		{
		    cout<<" ";	
		}
		/*5th loop prints this pattern
		           *
		          **
		         ***
		        ****
		       *****              */
		for(e=1;e<=d;e++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
