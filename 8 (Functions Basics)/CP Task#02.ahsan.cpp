#include<iostream>
using namespace std;
char cal_grades(int marks);
int main()
{
	int a;
	char gra;
	cout<<"Enter Obtained Marks of student b\w (0-100) in one subject: ";
    cin>>a;

    cout <<cal_grades(a);
    
   
    return 0;
}

char cal_grades(int marks)
{
    char grade;
    

	if(marks>=80 && marks<=100)	
    {
   	    cout<<"\nGrade Of Student is:";
		grade='A';
    }
    
	else if(marks>=70 && marks<80)
    {
   	    cout<<"\nGrade Of Student is:";
		grade='B';
    }

	else if(marks>=60 && marks <70)
    {
   	    cout<<"\nGrade Of Student is:";
		grade='C';
    }
	
	else if(marks>=50 && marks<60)
	{
   	    cout<<"\nGrade Of Student is:";
		grade='D';
    }
	
	else if(marks>=0 && marks<50)
    {
   	    cout<<"\nGrade Of Student is:";
		grade='F';
    }
	
	else
    cout<<"\nEnter Correct number:";
			
  return grade;
  
}
