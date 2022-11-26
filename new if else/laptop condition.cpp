#include<iostream>
using namespace std;
main()
{
	int a;
	cout<<"how much spend mony at laptop : ";
	cin>>a;
	if(a<30000)
	{
		cout<<"in his amount you can by  simple 4 gb ram and 500 gb simple hard in laptop";
	}
	else if((a>30000)&&(a<50000))
	{
		cout<<"in his amount you can by  simple 8 gb ram and 256 gb ssd hard in laptop";
	}
	else if(a>50000)
	{
		cout<<"you can by laptop in good condition";
	}
	else
	cout<<"invalid input";
}
