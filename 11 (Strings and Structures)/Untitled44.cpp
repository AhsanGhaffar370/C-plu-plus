#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	char name[20];
	double cost;
	ofstream outf("data");
	cout<<"item:";
	cin>>name;
	cout<<"cost;";
	cin>>cost;
	outf<<name<<"\n";
	outf<<cost<<"\n";
	outf.close();
	ifstream inf("data");
	inf>>name;
	inf>>cost;
	cout<<"\nitem:"<<name;
	cout<<"\ncost:"<<cost;
	inf.close();
	return 0;
}
