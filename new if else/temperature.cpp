#include<iostream>
using namespace std;
main()
{
	int tem;
	cout<<"enter temperature : ";
	cin>>tem;
	if(tem>=1 && (tem>=9))
	{
		if(tem <=0)
		{
			cout<<"Water in freezing ";
		}
		else if(tem>=100)
		{
			cout<<" Water is boiling";
		}
		else
			cout<<" water is not to hot or cold ";
	
	}
	else 
	cout<<"invalid input";		
}
