#include<iostream>
using namespace std;
main()
{
	int w;
	cout<<"Enter you weight if you are over 20 year  : ";
	cin>>w;
	if(w>90)
	{
		cout<<"your weight is high and its not good for health ";
	}
	else if((w<90)&& (w>75))
	{
		cout<<"your weight is high and try if you  lose your weight ";
	}
	else if((w<75)&&(w>65))
	{
		cout<<"Your weight is perfect";
	}
	else if(w<65)
	{
		cout<<"your weight is low ";
	}
	else 
	cout<<"invalid input ";
}
