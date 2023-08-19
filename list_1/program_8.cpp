#include<iostream>
using namespace std;
main()
{
	cout<<"Mohammed Chauhan "<<endl;
	cout<<"En_no:-220130318004 "<<endl;
	cout<<"...................."<<endl;
	
	int p,r,t;
	
	cout<<"Enter the amount : ";
	cin>>p;
	cout<<"Enter the Rate   : ";
	cin>>r;
	cout<<"Enter the time   : ";
	cin>>t;
	
	
	ci = p*((1+r/100)^t);
	cout<<"Compund Interest : "<<ci;
	
	return 0;
	
	
	
}