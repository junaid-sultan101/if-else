#include<iostream>
using namespace std;
main()
{
	float band;
	cout<<"Enter your IELTS band and check are you eligibal for fully funded scholarship :";
	cin>>band;
	if((band>=7.0)  && (band<=9.0))
	{
		cout<<"Congratulation you are eligibal for scholarship ";
	}
	else if((band<7.0)  && (band>=5.0))
	{
		cout<<" its depend on luck .you can apply may be your eligibal for half scholarship ";
	}
	else if(band<5.0)
	{
		cout<<"your bands are low ";
	}
	else if ((band>9.0) || (band<0.0))
	{
		cout<<"Invalid bands";
		
	}
	else
	cout<<"invalid input";
}
