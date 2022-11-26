#include<iostream>
using namespace std;
main()
{
	int n,m,h;
	cout<<"enter number of days : ";
	cin>>n;
	if(n>=1)
	{
		h=n*24;
		m=h*60;
		cout<<"Number of hours in "<<n<<" day are "<<h;
		cout<<"\nNumbe of minutes are "<<m;
		
	}
	else 
	cout<<"invalid input";
}
