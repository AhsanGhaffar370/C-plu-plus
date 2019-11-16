#include<iostream>
using namespace std;
int main()
{
	/*declaring constant for string its not necessary 
	but its nice way declare string size:*/
	const int max=20;
	const int days=7;
	
	//declare string str:
	char str[days][max]={"sun","mon","tue","wed","thu","fri","sat"};
	
	cout<<"The array of string"<<endl;
	for(int i=0;i<days;i++)
	{
		cout<<str[i]<<endl;
	}
	
	return 0;
	
}
