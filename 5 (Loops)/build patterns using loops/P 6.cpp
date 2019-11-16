#include <iostream>
using namespace std;
int main()
{
    //declaring variable:
	int i=1,j=10,k=1,x=0,z=1;
	
	/*This nested for loop prints this pattern:
	              **********
				  **** *****
				  ***   ****
				  **      **
				  *        *            */
	
	//1st loop is used for size:	
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
		for(x=0;x<k;x++)
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
	return 0;
}
