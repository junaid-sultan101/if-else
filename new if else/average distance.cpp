#include<iostream>
using namespace std;
main()
{
	int km;
	cout<<" Enter distance in kilo meter : ";
	cin>>km;
	if((km>10)&&(km<=30))
	{
		cout<<"its my average distance ";
	}
	else if(km>30)
	{
		cout<<" distance is large ";
	}
	else
	cout<<"invalid input";
}
