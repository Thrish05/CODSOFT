#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{
	cout<<"\t\t\t			Welcome to the Guessing Game!				"<<endl;
	cout<<"\n";
	cout<<"RULES: "<<endl;
	cout<<"1. The number is an integer and lies in the range of 1 to 100."<<endl;
	cout<<"2. You will have 10 chances to guess the number!	"<<endl;
	cout<<"You may begin."<<endl;
	cout<<"___________________________________________________________________________________"<<endl;
	srand(time(0));
	int randNum = ((rand() % 100) + 1);
	int y = 0;
	int counter = 10;
	string repeat;
	
	int guesscounter = 0;
	while(y!= randNum && counter > 0) {
		counter--;
		guesscounter++;
		cout<<"Enter the guess: ";
		int n;
		cin>>n;
		if(n == randNum)
		{
			cout<<"\n";
			cout<<"Success! Your guess is correct!"<<endl;
			cout<<"You found the number within "<<guesscounter<<" guesses!"<<endl;
			counter = 10;
			break;
		}
		if(counter == 0)
		{
			cout<<"Oops! Your chances are over! "<<endl;
			cout<<"The random number was: "<<randNum<<endl;
			break;
		}
		if(n > randNum)
		{
			cout<<"Your guess is higher."<<"\t"<<"Chances left: "<<counter<<endl;
			cout<<"\n";
		}
		if(n < randNum)
		{
			cout<<"Your guess is lower."<<"\t"<<"Chances left: "<<counter<<endl;
			cout<<"\n";
		}	
	}	
	cout<<"Program Completed"<<endl;
	return 0;
}
