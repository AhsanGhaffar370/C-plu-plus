#include<iostream>
char Calgrades(int,int,int);
char Calgrades(int,int);
using namespace std;

int main()
{
	//Declaring Variables:
	int n,a,b,x,y,z;
	
	//Enter The number on subjects:
	cout<<"Enter 2 OR 3 Number of Suject For Which " 
	<<"You Wants To Calculate The Grades: ";
    cin>>n;
    
    //if user enter 2 then execute this block:
    if(n==2)
    {
    	//Take Obtained Marks From User:
    	cout<<"\nEnter The Obtained Marks in Subjects: "<<endl;
    	cin>>a>>b;
		if(a>=1 && a<=100)
		
		//Call Calgrades Function for 2 subjects:
		cout<<Calgrades(a,b);
	}
	
	//If user enter 3 then execute this block:
    if(n==3)
    {
    	//Take Obtained Marks From User:
    	cout<<"\nEnter The Obtained Marks in Subjects: "<<endl;
    	cin>>x>>y>>z;
    	
    	//Call Calgrades Function for 3 subjects:
		cout<<Calgrades(x,y,z);
	}
	
	return 0;	
}

//calculate Percentage then return grade for 2 values Function: 
char Calgrades(int s1,int s2)
{
	//Declaring Variables:
    char grade;
    int per,s;
    
    //Calculatin Percentage:
    s=s1+s2;
    per=s*100/200;

    //Use If & Else if for grades:
	if(per>=87 && per<=100)	
    {
   	    cout<<"\nGrade Of Student in 2 Subjects is: ";
		grade='A';
    }
    
	else if(per>=75 && per<87)
    {
   	    cout<<"\nGrade Of Student in 2 Subjects is: ";
		grade='B';
    }

	else if(per>=65 && per<75)
    {
   	    cout<<"\nGrade Of Student in 2 Subjects is: ";
		grade='C';
    }
	
	else if(per>=50 && per<65)
	{
   	    cout<<"\nGrade Of Student in 2 Subjects is: ";
		grade='D';
    }
	
	else if(per>=0 && per<50) 
    {
   	    cout<<"\nGrade Of Student in 2 Subjects is: ";
		grade='F';
    }
	
    else
    cout<<"\nEnter Correct number ";
			
  return grade; 
}

//calculate Percentage then return grade for 3 values Function: 
char Calgrades(int s1,int s2,int s3)
{
	//Declaring Variables:
    char grade;
    int per,s;
    
    //Calculating Percentage:
    s=s1+s2+s3;
    per=s*100/300;

    //Use If & Else if for grades:
	if(per>=87 && per<=100)	
    {
   	    cout<<"\nGrade Of Student in 3 Subjects is: ";
		grade='A';
    }
    
	else if(per>=75 && per<87)
    {
   	    cout<<"\nGrade Of Student in 3 Subjects  is: ";
		grade='B';
    }

	else if(per>=65 && per<75)
    {
   	    cout<<"\nGrade Of Student in 3 Subjects is: ";
		grade='C';
    }
	
	else if(per>=50 && per<65)
	{
   	    cout<<"\nGrade Of Student in 3 Subjects is: ";
		grade='D';
    }
	
	else if(per>=0 && per<50) 
    {
   	    cout<<"\nGrade Of Student in 3 Subjects is: ";
		grade='F';
    }
	
    else
    cout<<"\nEnter Correct number: ";
			
  return grade; 
}
