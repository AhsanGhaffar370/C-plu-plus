#include<iostream>
#include<iomanip>
using namespace std;
void Cal_Price(int,int,int&);
int main()
{
    //Declaring+Initializing Variables:
	int a,b,c,d,e,app=160,man=110,ban=120,pea=100,gra=130,Tprice;
    
    //Declaring Total Price & Total Purchase Variables:
	int Tapp,Tban,Tman,Tpea,Tgra,Tpurchase;
	
	cout<<setw(65)<<setfill('=')<<endl;
	
	//Taking input of quantity of Apple,Banana,Peach,Mango,Grapes:
	cout<<"\n\nHow many Apple Did you Buy: ";
    cin>>a;

    cout<<"How many Banana Did you Buy: ";
    cin>>b;

    cout<<"How many Mango Did you Buy: ";
    cin>>c;

    cout<<"How many Peach Did you Buy: ";
    cin>>d;

    cout<<"How many Grapes Did you Buy: ";
    cin>>e;
    
	cout<<setw(54)<<setfill('=')<<endl;
		
	//Call Function Price:
	Cal_Price(app,a,Tprice);
	//Print Total Price Of Apple:
	cout<<"\n\nPrice For Apple :"<<a<<" * "<<app<<" = ";
	Tapp=Tprice;
	cout<<Tapp<<endl;

	//Call Function Price:	
    Cal_Price(ban,b,Tprice);
    //Print Total Price Of Banana:
	cout<<"Price For Banana :"<<b<<" * "<<ban<<" = ";
	Tban=Tprice;
	cout<<Tban<<endl;

	//Call Function Price:	
    Cal_Price(man,c,Tprice);
    //Print Total Price Of Mango:
	cout<<"Price For Mango :"<<c<<" * "<<man<<" = ";
	Tman=Tprice;
	cout<<Tman<<endl;

	//Call Function Price:	
    Cal_Price(pea,d,Tprice);
	//Print Total Price Of Peach:	
	cout<<"Price For Peach :"<<d<<" * "<<pea<<" = ";
	Tpea=Tprice;
	cout<<Tpea<<endl;	

	//Call Function Price:			
	Cal_Price(gra,e,Tprice);
	//Print Total Price Of Grapes:	
	cout<<"Price For Grapes :"<<e<<" * "<<gra<<" = ";
	Tgra=Tprice;
	cout<<Tgra<<endl;


    //Calculate Total Purchase:
    Tpurchase=Tapp+Tban+Tman+Tpea+Tgra;
    
    cout<<"\n"<<setw(38)<<setfill('*')<<"\n"<<endl;
    
    //Print Total Purchase:
	cout<<"Total Price Of Your Purchase is: "<<Tpurchase<<endl;
    
	cout<<"\n"<<setw(38)<<setfill('*')<<"\n"<<endl;
    return 0;
}

void Cal_Price(int i,int j,int&total)
{
	total=i*j;
	
}
