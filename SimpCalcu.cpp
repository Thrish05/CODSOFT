#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	cout<<"						Simple Calculator				"<<endl;
	string calcAgain;
	do {
		double x, y;
		int choice;
		
		cout<<"Enter the first number: ";
		cin>>x;
		cout<<"Enter the second number: ";
		cin>>y;
		
		cout<<"The entered numbers are: "<<x<<" and "<<y<<endl;
		cout<<"\n";
		cout<<"Choose the operation to be performed:"<<endl;
		cout<<"(1) Addition"<<endl;
		cout<<"(2) Subtraction"<<endl;
		cout<<"(3) Multiplication"<<endl;
		cout<<"(4) Division"<<endl;
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				cout<<"The result is: "<<x+y;
				break;
			case 2:
				cout<<"The result is: "<<x-y;
				break;
			case 3:
				cout<<"The result is: "<<x*y;
				break;
			case 4:
				cout<<"The result is: "<<x/y;
				break;
			default:
				cout<<"Please choose a valid operation";
				break;
		}
		cout<<"\n";
		cout<<"Do you want to calculate again? Enter Yes or No: ";
		cin>>calcAgain;
		cout<<"___________________________________________________________"<<endl;
		cout<<"\n";
		
	}
	while (calcAgain == "yes" || calcAgain == "y" || calcAgain == "YES" || calcAgain == "Y" );
	cout<<"\n";

	cout<<"Calculator Closed"<<endl;
	
}
