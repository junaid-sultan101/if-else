#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"Enter you salery in thousecd : ";
	cin>>n;
	if(n>70000)
	{
		cout<<" Your salery is good ";
	}
	else if( (n>=30000) && (n<=70000) )
	{
		cout<<"Your salery is average ";
	}
	else if(n<30000)
	{
	cout<<" your salery is low";	
	}
	
	else 
	cout<<" invalid input";
	
}
