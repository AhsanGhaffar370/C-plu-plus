#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	char ch='s';
	int a=33;
	double d=2.32;
	string str1="hello",str2="c++";
	
	ofstream outfile("myfile.txt");
	outfile<<ch<<a<<d<<str1<<str2;
	
	ifstream intfile("myfile.txt");
	intfile>>ch>>a>>d>>str1>>str2;
	
	cout<<ch<<a<<d<<str1<<str2;
	cout<<"end"<<endl;
	return 0;
}   

