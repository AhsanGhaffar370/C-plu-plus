#include<iostream>
using namespace std;
int main()
{	
//variable declare:
string name,birth,uni,hobby,pet;
//name:
cout<<"What is your name ? :"<<" ";
cin>>name;
//year of birth:
cout<<"\n"<<"Enter year of birth :"<<" ";
cin>>birth;
//university name:
cout<<"\n"<<"Name of University :"<<" ";
cin>>uni;
//favourite hobby:
cout<<"\n"<<"A favourite hobby :"<<" ";
cin>>hobby;
//pet's name:
cout<<"\n"<<"A pet's name :"<<" ";
cin>>pet;
//complete information:
cout<<"\n"<<"\t"<<"There lives a person named "<<name<<" who is currently"<<endl;
cout<<"\t"<<"19 years of age."<<name<<" is studying at "<<uni<<".It"<<endl;
cout<<"\t"<<"is interesting because "<<name<<" likes to "<<hobby<<endl;
cout<<"\t"<<"  with "<<pet<<" and they lived heavily ever after!"<<endl;
return 0;
}

