#include<iostream>
using namespace std;
int main()
{
	//declaring variable:
    int dim,a=1;
    
	//Enter value for size of a diamond:
    cout<<"Please Enter the size of a Diamond: ";
    cin>>dim;
    cout<<"\n";

    //apply nested for loop to prints a diamond:
    for(int b=0;b<=dim;b++)
    {
        for (int c=dim;c>b;c--)
        {
            cout<<" ";
        }
        cout<<"1"; 

        if( b>0)
        {
            for(int d=1;d<=a;d++)
            {
                cout<<" ";
            }
            a+=2;
            cout<<"2";
        }
        cout<<endl;
    }

    a-=4;

    for (int b=0;b<=dim-1;b++)
    {
        for (int c=0;c<=b;c++)
        {
            cout<<" ";
        }

        cout<<"3";

        for (int e=1; e<=a; e++)
        {
            cout<<" ";
        }
        a-=2;

        if (b!=dim-1)
        {
            cout<<"4";
        }
        cout<<endl;
    }
    return 0;
}

