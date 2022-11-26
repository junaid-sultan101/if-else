#include<iostream>
using namespace std;
main()
{
	int age;
	cout<<" Enter age in number : ";
	cin>>age;
	if(age>=1 && (age>=9))
	{
	if( (age>=13) && (age<=19) )
	{
		cout<<"You are teenager ...";
	}
	else if((age>=0) && (age<=12))
	{
		cout<<" you are baby";
	}
	else if(age <=-1)
	{
		cout<<"agre is not correct ";
	}
	else if(age>19)
	{
		cout<<" your age is greater than 19 ";
	}
	else if((age>='a') && (age<='z'))
	{
		cout<<"its alphabat ";
	}
	else
	cout<<"invalid input";
		
	}
	else
	cout<<"invalid input";

}
