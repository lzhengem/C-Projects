/*
Lena Zheng
CS110A
bankcharges2.cpp
*/

#include<iostream>
#include <iomanip>
using namespace std;

int main()

{
	double balance, checksfee, balancefee, totalfee;
	int checks;
	
	cout << "Enter the following information about your checking account.\n"
	<< "Beginning balance: $";
	cin >> balance;
	cout << "Number of checks written: ";
	cin >> checks;
	cout << endl;
	
	if ( checks < 20)
	{
		checksfee = 0.1*checks + 10;
	}
	else if (20 <= checks && checks <40)
	{
		checksfee = 0.08*checks + 10;
	}
	else if (40 <= checks && checks < 60)
	{
		checksfee = 0.06*checks + 10;
	}
	else if (60 <= checks)
	{
		checksfee = 0.04*checks + 10;
	}
	if (balance < 400)
	{
		balancefee = 15;
	}
	else if (balance >= 400)
	{
		balancefee = 0;
	}
	if (balance < 0)
	{
		cout << "Your account is overdrawn!\n";
	}
	if (checks < 0)
	{
		cout << "Number of checks must be zero or more.\n";
		return 0;
	}
	totalfee = balancefee + checksfee;
	cout << "The bank fee this month is $" << fixed << showpoint << 
	setprecision(2) << totalfee << endl << endl;

	return 0;
}
