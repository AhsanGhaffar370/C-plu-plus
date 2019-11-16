#include<iostream>
using namespace std;
int main()
{   //declaring variable for 1st nested loop:
	int a=1,b=7,c=1,d=1;
	/*This nested for loop prints half diamond
	                *
	               ***
	              *****
				 *******                    */
	
	//1st loop is used for size of diamond:			  
	for(a=1;a<=7;a++)
	{
		/*2nd loop prints space in the shape of
		            -----
		            ----
		            ---
		            --
		            -                        */                      
		for(b=7;b>=a;b--)
		{
			cout<<" ";
		}
		/*3rd loop prints 1/4 diamond
		       *
		      **
			 ***
			****
		   *****                */	    
		for(c=1;c<=a;c++)
		{
			cout<<"1";
		}
		/*4th loop also prints 1/4 diamond
		        *
		        **
				***
				****
				*****		      */
		for(d=1;d<c;d++)
		{
			cout<<"2";
		}
		cout<<endl;
	}

	//declaring variable for 2nd nested loop:
	int e=1,f=1,g=1,h=1;
	
	/*This nested loop prints
	       *******
	        *****
	         ***
	          *            */
		
	//1st loop is used for size of diamond:
	for(e=1;e<=7;e++)
	{
		/*2nd loop prints space in the shape of
		           -
		           --
		           ---
		           ----
		           -----                     */  
		for(f=1;f<=e;f++)
		{
			cout<<" ";
		}
		
		/*3rd loop prints 1/4 diamond
		       ***** 
			    ****
				 ***
				  **
				   *               */	 
		for(g=7;g>=f;g--)
		{
			cout<<"3";
		}
	    /*4th loop also prints 1/4 diamond
		           ***** 
			       ****
				   ***
				   **
				   *               */	
		for(h=7;h>=g;h--)
		{
			cout<<"4";
		}
		cout<<endl;
	}
	/* In the end its made a complete diamond
	                 *
	                ***
				   *****
				  *******
				 *********
				  *******
				   *****
				    ***
					 * 	              */
	return 0;
}
