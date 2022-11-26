#include<iostream>
using namespace std;
main()
{
	float a1,a3=100,a4;
	cout<<" total attendance percentage is 100%";
	cout<<" enter your attendance percentage  : ";
	cin>>a1;
	a4=(a1/a3)*100;
	if(a4>=75)
	{
		cout<<" you are eligibal for exam ";
	}
	else
	cout<<"you are not eligibal for exam";
	
}
