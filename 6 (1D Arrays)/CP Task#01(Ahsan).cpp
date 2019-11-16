#include<iostream>
using namespace std;
int main()
{
	//Declaring arrays:
   int arr1[10],arr2[10],b,a;
    
    //enter values of array1:
   	cout<<"Please Enter 10 values of array 1:"<<endl;
   	
    for(a=0;a<=9;a++)
   {
   	    cin>>arr1[a];
   }
   
   //cout array1:
   cout<<"========================"<<endl;
   cout<<"Matrix A Original:"<<endl;
   cout<<"========================"<<endl;
   
    for(a=0;a<=9;a++)
    {
	    cout<<arr1[a]<<"  ";
    }
    
    cout<<"\n"<<"\n"<<"========================"<<endl;
    cout<<"Matrix A Reverse:"<<endl;
    cout<<"========================"<<endl;
   	
	//store values of array1 in array2 in reverse order:   
    for(a=0,b=9;a<=9;a++,b--)
    {
       arr2[b]=arr1[a];
    }
    
	//cout array2:   
    for(b=0;b<=9;b++)
    {
   	    cout<<arr2[b]<<"  ";
    }
   
   return 0;
}
