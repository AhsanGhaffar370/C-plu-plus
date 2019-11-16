#include <iostream>
using namespace std;
int main()
{
    //declaring variable for 1st nested loop:
	int i=1,j=10,k=1,x=1,z=1;
	
	/*This nested for loop prints half diamond
	              **********
				  **** *****
				  ***   ****
				  **      **
				  *        *            */
	
	//1st loop is used for size of diamond:	
	for(i=1;i<=10;i++)
	{
		/*2nd loop prints this pattern
		       *****
			   **** 
			   ***   
			   **      
			   *                   */  
		for(j=10;j>=i;j--)
		{
			cout<<"*";
		}
		/*3rd loop prints space in this shape
		               -
		              --
		             ---
		            ----
		           -----             */
		for(k=1;k<=j;k++)
		{
			cout<<" ";
		}
		/*4th loop prints space in this shape
		               -
		               --
		               ---
		               ----
		               -----             */
		for(x=2;x<k;x++)
		{
		    cout<<" ";	
		}
		
		/*5th loop prints this pattern
		       ***** 
			    ****
				 ***
				  **
				   *               */
		for(z=10;z>=x;z--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	  
	//declaring variable for 2nd nested loop:
	int a=1,b=1,c=10,d=9,e=1;
	
	/*This nested for loop prints half diamond
                *        *
                **      **
                ***    ***
                ****  ****
                **********             */
                
	//1st loop is used for size of diamond:	
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
		for(d=9;d>c;d--)
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
