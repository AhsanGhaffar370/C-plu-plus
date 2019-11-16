#include<iostream>
using namespace std;
int main()
{   
    //Declaring Arrays:
	int arr1[7],arr2[7],a,b;
    
    //Enter values of array1:
	for(a=1;a<=7;a++)
	{
		cout<<"Enter Element "<<a<<" in A:";
		cin>>arr1[a];
	}
	cout<<"\n"<<"\n";
	
	//Enter values of array2:
	for(b=1;b<=7;b++)
	{
		cout<<"Enter Element "<<b<<" in B:";
		cin>>arr2[b];
	}
    
    //Comparing values of arr1 & arr2:
	if(arr1[1]==arr2[1] || arr1[2]==arr2[2]  || arr1[3]==arr2[3]  || arr1[4]==arr2[4]  || arr1[5]==arr2[5]  || arr1[6]==arr2[6]  || arr1[7]==arr2[7])
	{
		cout<<"\n"<<"Two Arrays are same:";
	}
	
	//If values of arr1 & arr2 are not same cout else statement:	
	else
	{
		cout<<"\n"<<"Arrays are not same:";
	}

return 0;
}
