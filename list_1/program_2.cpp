#include<iostream>
using namespace std;
class temp
{
	private:
		float fahern , celsius;
	public:
	float conversion(float f)
	{
		fahern = f;
		celsius = (fahern-32)*5/9;
		return celsius;
	 } 
};
int main()
{
	temp t;
	float f;
	cout<<"Mohammed Chauhan "<<endl;
	cout<<"En_no:-220130318004 "<<endl;
	cout<<"...................."<<endl;
	cout<<"Enter the Teamprature in fahernhit : ";
	cin>>f;
	cout<<"Temprature in celsius = "<<t.conversion(f);
	return 0;
}
