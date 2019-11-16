#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	/*declaring constant for string its not necessary 
	but its nice way declare string size:*/
	
	//declare string str:
	string str1,str2,str3;
	
	cout<<"Enter Str1 :";
	
	//hello my name is ahsan:
	
	/*if you only type {cin>>str} so its just output the "hello"
	
	{getline(cin,str)} outputs the complete line "hello ---- ahsan"
	
	and '$' sign(you can use any other sign) is used to change the
	line after completing text of 2,3 or some line you type "$" 
	in the end of text & then press "enter" to terminate the text*/ 
	
	getline(cin,str1);

	cout<<"Enter Str2 :";
		
	getline(cin,str2);
	
	//length of string:
	cout<<"Length Of Str1 ="<<
	str1.length()<<endl;
	
	//Concatination(adding 2 strings):
	str3=str1+" "+str2;
	
	cout<<"\n\nConcat Result :"<<str3;
	
	//Replacing:
	str1.replace(4,7,str2);
	cout<<"\n\nreplacing str1:"<<str1;
	
	//inserrting:
	str2.insert(7," program");
	cout<<"\n\nInserting in str2:"<<str2;
	
	//Swaping function of string:
	str1.swap(str2);	
	cout<<"\n\nSwapping:\nstr1="<<str1<<"\nstr2="<<str2;
	
	//Erasing:
	str2.erase(4,7);
	cout<<"\n\n4 char Erase in str2 :"<<str2;
	
	return 0;
}
