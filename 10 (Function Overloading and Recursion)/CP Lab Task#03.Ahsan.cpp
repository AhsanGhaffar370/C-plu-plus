#include <iostream>
using namespace std;
int rec_func(int);
int main()
{
	//Declaring Variables:
	int num;
	
	//Enter number:
	cout <<"Enter any Positive Number: ";
	cin >> num;
	
	//Call rec_function to prints the recursive function in reverse order:
	cout<<"\nThe Recursive function in Reverse Order is:"<<endl;
	rec_func(num);
}

//Recursive function(Function Call itself):
int rec_func(int n)
{
	//Use if condition tostops the recursion:
	if(n==0) 
	return 1;
	
	//Function call itself again & again with one lesser  value:
	rec_func(n-1);
	
	//Prints function:
	cout<<n<<" ";
}
