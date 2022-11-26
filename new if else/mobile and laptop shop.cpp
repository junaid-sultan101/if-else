#include<iostream>
using namespace std;
main()
{
	int n,m,l;
	cout<<"Do you want to mobile are laptop for mobile press 1 and for laptop press 2 :";
	cin>>n;
	if((n==1) || (n==2))
	{
		if(n==1)
		{
			 cout<<"Welcome to the mobile shop ";
			 cout<<"\n 1 for OPPO \n 2 for vivo \n 3 for Redmi \n 4 for infinix ";
			 cin>>m;
			 if(m==1)
			 {
			 	cout<<"you buy oppo phone";
			 }
			 else if(m==2)
			 {
			 	cout<<"you buy vivo phone";
			 }
			 else if(m==3)
			 {
			 	cout<<"you buy redmi phone";
			 }
			 else if(m==4)
			 {
			 	cout<<" you buy infinix phone ";
			 }
			 else 
			 cout<<" invalid input";
		}
		if(n==2)
		{
		cout<<"Welcome to the computer shop ";
	    cout<<"\n 1 for Mac \n 2 for Hp \n 3 for Dell \n 4 for Lenovo ";
		cin>>l;
		 if(l==1)
			 {
			 	cout<<"you buy Mac Laptop";
			 }
			 else if(l==2)
			 {
			 	cout<<"you buy Hp laptop";
			 }
			 else if(l==3)
			 {
			 	cout<<"you buy Dell Laptop";
			 }
			 else if(l==4)
			 {
			 	cout<<" you buy Lenovo Laptop ";
			 }
			 else 
			 cout<<" invalid input";
		
			
		}
		
	}
	else 
	cout<<"invalid input";
}
