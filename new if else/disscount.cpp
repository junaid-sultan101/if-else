#include<iostream>
using namespace std;
main()
{
	int q,p,d;
	cout<<" Enter quantity of shampoo : ";
	cin>>q;
	p=q*300;
	if(p>2000)
	{
		d=q*100/10;
		cout<<" we can give you a discount only 10%  and you can pay only -> "<<p-d;	
		
	}
	else
	cout<<" total amount is "<<p;
}
