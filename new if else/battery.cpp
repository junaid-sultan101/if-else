#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<" Enter battery health of mobile : ";
	cin>>n;
	if((n<=100) && (n>=85))
	{
		cout<<" Battery health is good";
	}
	else if((n<85) && (n>=65))
	{
		cout<<" Battery health is normal";
	}
	else if(n<64) 
	{
		cout<<" Battery health is not good";
	}
	else 
	cout<<" invalid input";
}
