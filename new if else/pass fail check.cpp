#include<iostream>
using namespace std;
main()
{
	int number ,total,t;
	cout<<"Enter total number : ";
	cin>>total;
	cout<<"Enter numbers you get ";
	cin>>number;
	t=(number/total)*100;
	if(t<=33)
	{
		cout<<"PASS";
	}
	else
	cout<<"Fail";
}
