#include<iostream>
using namespace std;
main()
{
	int n,m;
	cout<<"Enter numbe of feet : ";
	cin>>n;
	if(n>0)
	{
		m=n*12;
		cout<<"in "<<n<<" feet the number of centemeter are  : "<<m;
	}
	else 
	cout<<"number is less then 0 or equal to zero orn invalid input ";
}
