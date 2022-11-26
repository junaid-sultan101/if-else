#include<iostream>
using namespace std;
main()
{
	int f;
	cout<<"Enter the frequency of water : ";
	cin>>f;
	if(f>60)
	{
		cout<<"Frequency is too high";
	}
	else if((f>40)&&(f<60))
	{
		cout<<" frequency is normal ";
	}
	else
	cout<<"frequency is low";
}
