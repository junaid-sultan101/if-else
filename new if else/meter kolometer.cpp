#include<iostream>
using namespace std;
main()
{
	float cm,m,km;
	int c;
	cout<<" Enter number of centermiter : ";
	cin>>cm;
	cout<<" Enter 1 for convert into meter and 2 for Kilo meter : ";
	cin>>c;
	if(c==1)
	{
		m=cm/100;
		cout<<" Meter is : "<<m;
	}
	else if(c==2)
	{
		km=cm/100000;
		cout<<"kilo meter is : "<<km;
		
	}
	else
	cout<<"invalid input";
}
