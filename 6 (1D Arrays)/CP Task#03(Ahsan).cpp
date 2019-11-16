#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Declaring Arrays:
	int arr1[10],arr2[10],a,b;
	
	//design an histogram on different values of array:
	cout<<"Element"<<setw(13)<<"Value"<<setw(17)<<"Histogram"<<endl;
	
	//apply nested for loop to enter values of array and print * on different value:
	//of array to design a graph:
	for(a=0;a<=9;a++)
	{
		cout<<a<<"\t"<<"\t";
	    cin>>arr1[a];
	    cout<<setw(29);
		
		for(b=1;b<=arr1[a];b++)
		{
			cout<<"*";
		
		}
		cout<<"\n";
		cout<<endl;
	}

	return 0;
}
