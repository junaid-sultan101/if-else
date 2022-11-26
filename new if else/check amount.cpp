#include<iostream>
using namespace std;
main()
{
	int amount , total=10,price=120,t;
	cout<<"Enter number of ketchep do you want : ";
	cin>>amount;
	if(amount<=total)
	{
		t=amount*price;
		cout<<" yes you can buy\n";
		cout<<" Please pay "<<t<<" bill ";
	}
	else if(amount>total)
	{
		cout<<"you can by only "<<total;
	}
	else
	cout<<" invalid input";
}
