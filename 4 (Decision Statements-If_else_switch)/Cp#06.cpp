#include<iostream>
using namespace std;
int main()
{
//Declaring variables:		
 int mon;
 cout<<"Enter any num between (1 to 12): ";
 cin>>mon;
 //Apply condition:
 switch(mon)
 {
 	case 1:
 	cout<<"\n"<<"The month of year is: January";
 	break;
	 case 2:
 	cout<<"\n"<<"The month of year is: February";
 	break;
	 case 3:
 	cout<<"\n"<<"The month of year is: March";
	 break;
	 case 4:
 	cout<<"\n"<<"The month of year is: April";
	 break;
	 case 5:
 	cout<<"\n"<<"The month of year is: May";
	 break;
	 case 6:
 	cout<<"\n"<<"The month of year is: June";
	 break;
	 case 7:
 	cout<<"\n"<<"The month of year is: July";
	 break;
	 case 8:
 	cout<<"\n"<<"The month of year is: August";
	 break;
	 case 9:
 	cout<<"\n"<<"The month of year is: September";
	 break;
	 case 10:
 	cout<<"\n"<<"The month of year is: October";
	 break;
	 case 11:
 	cout<<"\n"<<"The month of year is: November";
	 break;
	 case 12:
 	cout<<"\n"<<"The month of year is: December";	
 }	
 return 0;
}
