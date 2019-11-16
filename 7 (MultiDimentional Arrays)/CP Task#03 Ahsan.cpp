#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//                        SECTION A:
	//Declaring variables:
	int i,j,a[8][5],sum,per;
	
	cout<<"\t\t\t"<<setw(30)<<setfill('*');
	cout<<"\n\t\t\t"<<"        SECTION A"<<endl;
	cout<<"\t\t\t"<<setw(28)<<setfill('*')<<"\n\n";
    
    //Apply nested for loop to input values of multi-dimension array:
	for(i=0;i<8;i++)
	{
		for(j=0;j<5;j++)
		{
		    //Taking input of each student courses marks: 
			cout<<"Marks of Student "<<i+1<<" in course "<<j+1<<": ";
			cin>>a[i][j];
		}
		cout<<"\n";
	}
		
	/*Apply neste for loop to add rows of array in sum and then
	  calculate percentage of sum:*/
	  	
	for(int i=0;i<8;i++)
	{ 
		for(int j=0;j<5;j++)
		{
		  //Calculate sum & percentage(%) of courses total marks:	
		  sum=sum+a[i][j];
		  
		  per=sum*100/500;
		}
		
		//Output the obtained marks & percentage of each student:
		cout<<"Obtained Marks Of Student "<<i+1<<": "<<sum<<endl;
		sum=0;
		
		cout<<"Percentage(%)  Of Student "<<i+1<<": "<<per<<"%"<<endl;
		per=0;
		cout<<"\n";
	}
	
		//                        SECTION B:
	//Declaring variables:
	int b[8][5];
	
	cout<<"\t\t\t"<<setw(30)<<setfill('*');
	cout<<"\n\t\t\t"<<"        SECTION B"<<endl;
	cout<<"\t\t\t"<<setw(28)<<setfill('*')<<"\n\n";
    
    //Apply nested for loop to input values of multi-dimension array:
	for(i=0;i<8;i++)
	{
		for(j=0;j<5;j++)
		{
		    //Taking input of each student courses marks: 
			cout<<"Marks of Student "<<i+1<<" in course "<<j+1<<": ";
			cin>>b[i][j];
		}
		cout<<"\n";
	}
		
	/*Apply neste for loop to add rows of array in sum and then
	  calculate percentage of sum:*/
	  	
	for(int i=0;i<8;i++)
	{ 
		for(int j=0;j<5;j++)
		{
		  //Calculate sum & percentage(%) of courses total marks:	
		  sum=sum+b[i][j];
		  
		  per=sum*100/500;
		}
		
		//Output the obtained marks & percentage of each student:
		cout<<"Obtained Marks Of Student "<<i+1<<": "<<sum<<endl;
		sum=0;
		
		cout<<"Percentage(%)  Of Student "<<i+1<<": "<<per<<"%"<<endl;
		per=0;
		cout<<"\n";
	}
	
		//                        SECTION C:
		//Declaring variables:
	int c[8][5];
	
	cout<<"\t\t\t"<<setw(30)<<setfill('*');
	cout<<"\n\t\t\t"<<"        SECTION C"<<endl;
	cout<<"\t\t\t"<<setw(28)<<setfill('*')<<"\n\n";
    
    //Apply nested for loop to input values of multi-dimension array:
	for(i=0;i<8;i++)
	{
		for(j=0;j<5;j++)
		{
		    //Taking input of each student courses marks: 
			cout<<"Marks of Student "<<i+1<<" in course "<<j+1<<": ";
			cin>>c[i][j];
		}
		cout<<"\n";
	}
		
	/*Apply neste for loop to add rows of array in sum and then
	  calculate percentage of sum:*/
	  	
	for(int i=0;i<8;i++)
	{ 
		for(int j=0;j<5;j++)
		{
		  //Calculate sum & percentage(%) of courses total marks:	
		  sum=sum+c[i][j];
		  
		  per=sum*100/500;
		}
		
		//Output the obtained marks & percentage of each student:
		cout<<"Obtained Marks Of Student "<<i+1<<": "<<sum<<endl;
		sum=0;
		
		cout<<"Percentage(%)  Of Student "<<i+1<<": "<<per<<"%"<<endl;
		per=0;
		cout<<"\n";
	}
	
  return 0;
}
