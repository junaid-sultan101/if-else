#include<iostream>
using namespace std;
main()
{
	int salery,num,b;
	cout<<"What is your salery : ";
	cin>>salery;
	cout<<"how much you are working in this company in years : ";
	cin>>num;
	if(num>=5)
	{
		b=salery*5/100;
		cout<<" We can give you 5% bonus and your salery is "<<salery+b;
	}
	else
	cout<<" you are not eligibal for bonus";
}
